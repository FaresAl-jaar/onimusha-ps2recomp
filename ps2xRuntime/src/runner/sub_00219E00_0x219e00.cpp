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

// Function: sub_00219E00
// Address: 0x219e00 - 0x219ea4
void sub_00219E00_0x219e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219E00_0x219e00");
#endif

    switch (ctx->pc) {
        case 0x219e1cu: goto label_219e1c;
        case 0x219e4cu: goto label_219e4c;
        case 0x219e64u: goto label_219e64;
        default: break;
    }

    ctx->pc = 0x219e00u;

    // 0x219e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219e10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219e14: 0xc084968  jal         func_2125A0
    ctx->pc = 0x219E14u;
    SET_GPR_U32(ctx, 31, 0x219E1Cu);
    ctx->pc = 0x219E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E14u;
    // 0x219e18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x219E14u, 0x219E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E1Cu;
label_219e1c:
    // 0x219e1c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219e20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x219E20u;
    {
        const bool branch_taken_0x219e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E20u;
        // 0x219e24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e20) {
            ctx->pc = 0x219E40u;
            goto label_219e40;
        }
    }
    ctx->pc = 0x219E28u;
    // 0x219e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219e2c: 0x34a50189  ori         $a1, $a1, 0x189
    ctx->pc = 0x219e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)393);
    // 0x219e30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219e38: 0x80848e0  j           func_212380
    ctx->pc = 0x219E38u;
    ctx->pc = 0x219E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E38u;
    // 0x219e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x219E40u;
label_219e40:
    // 0x219e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e44: 0xc0867aa  jal         func_219EA8
    ctx->pc = 0x219E44u;
    SET_GPR_U32(ctx, 31, 0x219E4Cu);
    ctx->pc = 0x219E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E44u;
    // 0x219e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219EA8u, 0x219E44u, 0x219E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E4Cu;
label_219e4c:
    // 0x219e4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x219e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e50: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219e54: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x219E54u;
    {
        const bool branch_taken_0x219e54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E54u;
        // 0x219e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e54) {
            ctx->pc = 0x219E70u;
            goto label_219e70;
        }
    }
    ctx->pc = 0x219E5Cu;
    // 0x219e5c: 0xc0848e0  jal         func_212380
    ctx->pc = 0x219E5Cu;
    SET_GPR_U32(ctx, 31, 0x219E64u);
    ctx->pc = 0x219E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E5Cu;
    // 0x219e60: 0x34a50f31  ori         $a1, $a1, 0xF31 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3889);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x219E5Cu, 0x219E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E64u;
label_219e64:
    // 0x219e64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219E64u;
    {
        const bool branch_taken_0x219e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E64u;
        // 0x219e68: 0x8e020980  lw          $v0, 0x980($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e64) {
            ctx->pc = 0x219E88u;
            goto label_219e88;
        }
    }
    ctx->pc = 0x219E6Cu;
    // 0x219e6c: 0x0  nop
    ctx->pc = 0x219e6cu;
    // NOP
label_219e70:
    // 0x219e70: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x219e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x219e74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x219e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x219e78: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x219e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x219e7c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x219e7cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x219e80: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x219e80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x219e84: 0x8e020980  lw          $v0, 0x980($s0)
    ctx->pc = 0x219e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_219e88:
    // 0x219e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219e8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x219e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x219e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219e94: 0xae020980  sw          $v0, 0x980($s0)
    ctx->pc = 0x219e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
    // 0x219e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x219E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E9Cu;
        // 0x219ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219EA4u;
}
