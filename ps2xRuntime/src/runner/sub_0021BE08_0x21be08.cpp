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

// Function: sub_0021BE08
// Address: 0x21be08 - 0x21be94
void sub_0021BE08_0x21be08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BE08_0x21be08");
#endif

    switch (ctx->pc) {
        case 0x21be24u: goto label_21be24;
        case 0x21be78u: goto label_21be78;
        default: break;
    }

    ctx->pc = 0x21be08u;

    // 0x21be08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21be08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21be0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21be10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21be10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21be14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21be18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21be1c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21BE1Cu;
    SET_GPR_U32(ctx, 31, 0x21BE24u);
    ctx->pc = 0x21BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE1Cu;
    // 0x21be20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21BE1Cu, 0x21BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE24u;
label_21be24:
    // 0x21be24: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21be24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21be28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21be28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be2c: 0x34a50142  ori         $a1, $a1, 0x142
    ctx->pc = 0x21be2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)322);
    // 0x21be30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BE30u;
    {
        const bool branch_taken_0x21be30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE30u;
        // 0x21be34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be30) {
            ctx->pc = 0x21BE50u;
            goto label_21be50;
        }
    }
    ctx->pc = 0x21BE38u;
    // 0x21be38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21be38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21be3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21be3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21be40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21be40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21be44: 0x80848e0  j           func_212380
    ctx->pc = 0x21BE44u;
    ctx->pc = 0x21BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE44u;
    // 0x21be48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21BE4Cu;
    // 0x21be4c: 0x0  nop
    ctx->pc = 0x21be4cu;
    // NOP
label_21be50:
    // 0x21be50: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x21be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21be54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21be54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21be58: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BE58u;
    {
        const bool branch_taken_0x21be58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE58u;
        // 0x21be5c: 0x64300b  movn        $a2, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be58) {
            ctx->pc = 0x21BE68u;
            goto label_21be68;
        }
    }
    ctx->pc = 0x21BE60u;
    // 0x21be60: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BE60u;
    {
        const bool branch_taken_0x21be60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE60u;
        // 0x21be64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be60) {
            ctx->pc = 0x21BE80u;
            goto label_21be80;
        }
    }
    ctx->pc = 0x21BE68u;
label_21be68:
    // 0x21be68: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x21be68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x21be6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21be6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be70: 0xc086fa6  jal         func_21BE98
    ctx->pc = 0x21BE70u;
    SET_GPR_U32(ctx, 31, 0x21BE78u);
    ctx->pc = 0x21BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE70u;
    // 0x21be74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE98u, 0x21BE70u, 0x21BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE78u;
label_21be78:
    // 0x21be78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21be7c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x21be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_21be80:
    // 0x21be80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21be80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21be84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21be84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21be88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21be88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21be8c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE8Cu;
        // 0x21be90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BE94u;
}
