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

// Function: sub_002154C8
// Address: 0x2154c8 - 0x21554c
void sub_002154C8_0x2154c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002154C8_0x2154c8");
#endif

    switch (ctx->pc) {
        case 0x2154e4u: goto label_2154e4;
        case 0x2154fcu: goto label_2154fc;
        case 0x215510u: goto label_215510;
        default: break;
    }

    ctx->pc = 0x2154c8u;

    // 0x2154c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2154c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2154cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2154ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2154d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2154d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2154d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2154d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2154d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2154d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2154dc: 0xc0867ea  jal         func_219FA8
    ctx->pc = 0x2154DCu;
    SET_GPR_U32(ctx, 31, 0x2154E4u);
    ctx->pc = 0x2154E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2154DCu;
    // 0x2154e0: 0x26110950  addiu       $s1, $s0, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219FA8u, 0x2154DCu, 0x2154E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2154E4u;
label_2154e4:
    // 0x2154e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2154e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2154e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2154e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2154ec: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2154ECu;
    {
        const bool branch_taken_0x2154ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2154F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154ECu;
        // 0x2154f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154ec) {
            ctx->pc = 0x215504u;
            goto label_215504;
        }
    }
    ctx->pc = 0x2154F4u;
    // 0x2154f4: 0xc085554  jal         func_215550
    ctx->pc = 0x2154F4u;
    SET_GPR_U32(ctx, 31, 0x2154FCu);
    ctx->pc = 0x215550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215550u, 0x2154F4u, 0x2154FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2154FCu;
label_2154fc:
    // 0x2154fc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2154FCu;
    {
        const bool branch_taken_0x2154fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2154fc) {
            ctx->pc = 0x215500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154FCu;
            // 0x215500: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21553Cu;
            goto label_21553c;
        }
    }
    ctx->pc = 0x215504u;
label_215504:
    // 0x215504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215508: 0xc085570  jal         func_2155C0
    ctx->pc = 0x215508u;
    SET_GPR_U32(ctx, 31, 0x215510u);
    ctx->pc = 0x21550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215508u;
    // 0x21550c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155C0u, 0x215508u, 0x215510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215510u;
label_215510:
    // 0x215510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215514: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215518: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x215518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21551c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21551Cu;
    {
        const bool branch_taken_0x21551c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21551Cu;
        // 0x215520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21551c) {
            ctx->pc = 0x215538u;
            goto label_215538;
        }
    }
    ctx->pc = 0x215524u;
    // 0x215524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21552c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215530: 0x8087e5e  j           func_21F978
    ctx->pc = 0x215530u;
    ctx->pc = 0x215534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215530u;
    // 0x215534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    sub_0021F978_0x21f978(rdram, ctx, runtime); return;
    ctx->pc = 0x215538u;
label_215538:
    // 0x215538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21553c:
    // 0x21553c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21553cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215544: 0x3e00008  jr          $ra
    ctx->pc = 0x215544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215544u;
        // 0x215548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21554Cu;
}
