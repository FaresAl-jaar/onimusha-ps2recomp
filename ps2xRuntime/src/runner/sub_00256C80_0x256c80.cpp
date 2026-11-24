#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00256C80
// Address: 0x256c80 - 0x256d3c
void sub_00256C80_0x256c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256C80_0x256c80");
#endif

    switch (ctx->pc) {
        case 0x256cb8u: goto label_256cb8;
        default: break;
    }

    ctx->pc = 0x256c80u;

    // 0x256c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256c8c: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x256c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256c90: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x256c90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256c94: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x256c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x256c98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256C98u;
    {
        const bool branch_taken_0x256c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C98u;
        // 0x256c9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c98) {
            ctx->pc = 0x256CC0u;
            goto label_256cc0;
        }
    }
    ctx->pc = 0x256CA0u;
    // 0x256ca0: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x256ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x256ca4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x256ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256ca8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256cac: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x256cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x256cb0: 0xc095f80  jal         func_257E00
    ctx->pc = 0x256CB0u;
    SET_GPR_U32(ctx, 31, 0x256CB8u);
    ctx->pc = 0x256CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256CB0u;
    // 0x256cb4: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E00u, 0x256CB0u, 0x256CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CB8u;
label_256cb8:
    // 0x256cb8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256cbc: 0xa462002c  sh          $v0, 0x2C($v1)
    ctx->pc = 0x256cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 2));
label_256cc0:
    // 0x256cc0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256cc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x256cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x256cc8: 0x2464002c  addiu       $a0, $v1, 0x2C
    ctx->pc = 0x256cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x256ccc: 0x8463002c  lh          $v1, 0x2C($v1)
    ctx->pc = 0x256cccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x256cd0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x256CD0u;
    {
        const bool branch_taken_0x256cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x256CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CD0u;
        // 0x256cd4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cd0) {
            ctx->pc = 0x256D28u;
            goto label_256d28;
        }
    }
    ctx->pc = 0x256CD8u;
    // 0x256cd8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x256cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256cdc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256ce0: 0x8462002c  lh          $v0, 0x2C($v1)
    ctx->pc = 0x256ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x256ce4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256CE4u;
    {
        const bool branch_taken_0x256ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256ce4) {
            ctx->pc = 0x256D00u;
            goto label_256d00;
        }
    }
    ctx->pc = 0x256CECu;
    // 0x256cec: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x256cecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256cf0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x256cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x256cf4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x256CF4u;
    {
        const bool branch_taken_0x256cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256cf4) {
            ctx->pc = 0x256D28u;
            goto label_256d28;
        }
    }
    ctx->pc = 0x256CFCu;
    // 0x256cfc: 0x0  nop
    ctx->pc = 0x256cfcu;
    // NOP
label_256d00:
    // 0x256d00: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x256d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x256d04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x256d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x256d08: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x256d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x256d0c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256d10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x256d10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256d14: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x256d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x256d18: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x256d18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256d1c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256d20: 0x9062002e  lbu         $v0, 0x2E($v1)
    ctx->pc = 0x256d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x256d24: 0xa462002c  sh          $v0, 0x2C($v1)
    ctx->pc = 0x256d24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 2));
label_256d28:
    // 0x256d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d34: 0x3e00008  jr          $ra
    ctx->pc = 0x256D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D34u;
        // 0x256d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256D3Cu;
}
