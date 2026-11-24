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

// Function: sub_0021FDE8
// Address: 0x21fde8 - 0x21fe64
void sub_0021FDE8_0x21fde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FDE8_0x21fde8");
#endif

    switch (ctx->pc) {
        case 0x21fe0cu: goto label_21fe0c;
        case 0x21fe48u: goto label_21fe48;
        default: break;
    }

    ctx->pc = 0x21fde8u;

    // 0x21fde8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fdec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fdf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21fdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21fdf8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21fdf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21fdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21fe00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21fe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21fe04: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21FE04u;
    SET_GPR_U32(ctx, 31, 0x21FE0Cu);
    ctx->pc = 0x21FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE04u;
    // 0x21fe08: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21FE04u, 0x21FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE0Cu;
label_21fe0c:
    // 0x21fe0c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21fe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21fe10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21fe14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21FE18u;
    {
        const bool branch_taken_0x21fe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE18u;
        // 0x21fe1c: 0x34a50117  ori         $a1, $a1, 0x117 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)279);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe18) {
            ctx->pc = 0x21FE40u;
            goto label_21fe40;
        }
    }
    ctx->pc = 0x21FE20u;
    // 0x21fe20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fe20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fe24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fe28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fe2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21fe2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fe30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21fe30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fe34: 0x80848e0  j           func_212380
    ctx->pc = 0x21FE34u;
    ctx->pc = 0x21FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE34u;
    // 0x21fe38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21FE3Cu;
    // 0x21fe3c: 0x0  nop
    ctx->pc = 0x21fe3cu;
    // NOP
label_21fe40:
    // 0x21fe40: 0xc087f9a  jal         func_21FE68
    ctx->pc = 0x21FE40u;
    SET_GPR_U32(ctx, 31, 0x21FE48u);
    ctx->pc = 0x21FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE40u;
    // 0x21fe44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FE68u, 0x21FE40u, 0x21FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE48u;
label_21fe48:
    // 0x21fe48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21fe48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fe4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fe50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fe50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fe54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21fe54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fe58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21fe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE5Cu;
        // 0x21fe60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FE64u;
}
