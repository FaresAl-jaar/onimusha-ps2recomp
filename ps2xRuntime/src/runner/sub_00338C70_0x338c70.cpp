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

// Function: sub_00338C70
// Address: 0x338c70 - 0x338d30
void sub_00338C70_0x338c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338C70_0x338c70");
#endif

    switch (ctx->pc) {
        case 0x338cbcu: goto label_338cbc;
        case 0x338cd8u: goto label_338cd8;
        case 0x338d0cu: goto label_338d0c;
        default: break;
    }

    ctx->pc = 0x338c70u;

    // 0x338c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x338c74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x338c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x338c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x338c7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x338c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x338c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338c84: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x338c84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE4u));
    // 0x338c88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x338c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x338c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338C8Cu;
    {
        const bool branch_taken_0x338c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C8Cu;
        // 0x338c90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c8c) {
            ctx->pc = 0x338CA0u;
            goto label_338ca0;
        }
    }
    ctx->pc = 0x338C94u;
    // 0x338c94: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x338C94u;
    {
        const bool branch_taken_0x338c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338c94) {
            ctx->pc = 0x338D20u;
            goto label_338d20;
        }
    }
    ctx->pc = 0x338C9Cu;
    // 0x338c9c: 0x0  nop
    ctx->pc = 0x338c9cu;
    // NOP
label_338ca0:
    // 0x338ca0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x338ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x338ca4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x338ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x338ca8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x338ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338cac: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x338CACu;
    {
        const bool branch_taken_0x338cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x338cac) {
            ctx->pc = 0x338D18u;
            goto label_338d18;
        }
    }
    ctx->pc = 0x338CB4u;
    // 0x338cb4: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x338CB4u;
    SET_GPR_U32(ctx, 31, 0x338CBCu);
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x338CB4u, 0x338CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338CBCu;
label_338cbc:
    // 0x338cbc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x338cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x338cc0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x338CC0u;
    {
        const bool branch_taken_0x338cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x338cc0) {
            ctx->pc = 0x338CD0u;
            goto label_338cd0;
        }
    }
    ctx->pc = 0x338CC8u;
    // 0x338cc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x338CC8u;
    {
        const bool branch_taken_0x338cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CC8u;
        // 0x338ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338cc8) {
            ctx->pc = 0x338D20u;
            goto label_338d20;
        }
    }
    ctx->pc = 0x338CD0u;
label_338cd0:
    // 0x338cd0: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x338CD0u;
    SET_GPR_U32(ctx, 31, 0x338CD8u);
    ctx->pc = 0x338CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CD0u;
    // 0x338cd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x338CD0u, 0x338CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338CD8u;
label_338cd8:
    // 0x338cd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x338cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x338cdc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x338CDCu;
    {
        const bool branch_taken_0x338cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x338cdc) {
            ctx->pc = 0x338CF0u;
            goto label_338cf0;
        }
    }
    ctx->pc = 0x338CE4u;
    // 0x338ce4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x338CE4u;
    {
        const bool branch_taken_0x338ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CE4u;
        // 0x338ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ce4) {
            ctx->pc = 0x338D20u;
            goto label_338d20;
        }
    }
    ctx->pc = 0x338CECu;
    // 0x338cec: 0x0  nop
    ctx->pc = 0x338cecu;
    // NOP
label_338cf0:
    // 0x338cf0: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x338cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x338cf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x338CF4u;
    {
        const bool branch_taken_0x338cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CF4u;
        // 0x338cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338cf4) {
            ctx->pc = 0x338D04u;
            goto label_338d04;
        }
    }
    ctx->pc = 0x338CFCu;
    // 0x338cfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x338CFCu;
    {
        const bool branch_taken_0x338cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338cfc) {
            ctx->pc = 0x338D0Cu;
            goto label_338d0c;
        }
    }
    ctx->pc = 0x338D04u;
label_338d04:
    // 0x338d04: 0xc08ee36  jal         func_23B8D8
    ctx->pc = 0x338D04u;
    SET_GPR_U32(ctx, 31, 0x338D0Cu);
    ctx->pc = 0x338D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D04u;
    // 0x338d08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8D8u, 0x338D04u, 0x338D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D0Cu;
label_338d0c:
    // 0x338d0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x338D0Cu;
    {
        const bool branch_taken_0x338d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d0c) {
            ctx->pc = 0x338D20u;
            goto label_338d20;
        }
    }
    ctx->pc = 0x338D14u;
    // 0x338d14: 0x0  nop
    ctx->pc = 0x338d14u;
    // NOP
label_338d18:
    // 0x338d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338d1c: 0x0  nop
    ctx->pc = 0x338d1cu;
    // NOP
label_338d20:
    // 0x338d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338d28: 0x3e00008  jr          $ra
    ctx->pc = 0x338D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D28u;
        // 0x338d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338D30u;
}
