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

// Function: sub_002032A8
// Address: 0x2032a8 - 0x203340
void sub_002032A8_0x2032a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002032A8_0x2032a8");
#endif

    switch (ctx->pc) {
        case 0x2032ccu: goto label_2032cc;
        case 0x2032f8u: goto label_2032f8;
        case 0x203308u: goto label_203308;
        case 0x203318u: goto label_203318;
        case 0x203328u: goto label_203328;
        default: break;
    }

    ctx->pc = 0x2032a8u;

    // 0x2032a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2032a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2032ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2032acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2032b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2032b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2032b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2032b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2032b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2032bc: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2032c0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2032c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2032c4: 0xc087684  jal         func_21DA10
    ctx->pc = 0x2032C4u;
    SET_GPR_U32(ctx, 31, 0x2032CCu);
    ctx->pc = 0x2032C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032C4u;
    // 0x2032c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x2032C4u, 0x2032CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032CCu;
label_2032cc:
    // 0x2032cc: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x2032ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x2032d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2032d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032d4: 0x24a55b48  addiu       $a1, $a1, 0x5B48
    ctx->pc = 0x2032d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23368));
    // 0x2032d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2032D8u;
    {
        const bool branch_taken_0x2032d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032D8u;
        // 0x2032dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032d8) {
            ctx->pc = 0x2032F0u;
            goto label_2032f0;
        }
    }
    ctx->pc = 0x2032E0u;
    // 0x2032e0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2032e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2032e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2032E4u;
    {
        const bool branch_taken_0x2032e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032E4u;
        // 0x2032e8: 0x24846728  addiu       $a0, $a0, 0x6728 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032e4) {
            ctx->pc = 0x203310u;
            goto label_203310;
        }
    }
    ctx->pc = 0x2032ECu;
    // 0x2032ec: 0x0  nop
    ctx->pc = 0x2032ecu;
    // NOP
label_2032f0:
    // 0x2032f0: 0xc08490c  jal         func_212430
    ctx->pc = 0x2032F0u;
    SET_GPR_U32(ctx, 31, 0x2032F8u);
    ctx->pc = 0x2032F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032F0u;
    // 0x2032f4: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212430u, 0x2032F0u, 0x2032F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032F8u;
label_2032f8:
    // 0x2032f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2032F8u;
    {
        const bool branch_taken_0x2032f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032F8u;
        // 0x2032fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032f8) {
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203300u;
    // 0x203300: 0xc08168c  jal         func_205A30
    ctx->pc = 0x203300u;
    SET_GPR_U32(ctx, 31, 0x203308u);
    ctx->pc = 0x203304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203300u;
    // 0x203304: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x203300u, 0x203308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203308u;
label_203308:
    // 0x203308: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20330c: 0x24846760  addiu       $a0, $a0, 0x6760
    ctx->pc = 0x20330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26464));
label_203310:
    // 0x203310: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x203310u;
    SET_GPR_U32(ctx, 31, 0x203318u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x203310u, 0x203318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203318u;
label_203318:
    // 0x203318: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203318u;
    {
        const bool branch_taken_0x203318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203318u;
        // 0x20331c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203318) {
            ctx->pc = 0x20332Cu;
            goto label_20332c;
        }
    }
    ctx->pc = 0x203320u;
label_203320:
    // 0x203320: 0xc080bec  jal         func_202FB0
    ctx->pc = 0x203320u;
    SET_GPR_U32(ctx, 31, 0x203328u);
    ctx->pc = 0x202FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202FB0u, 0x203320u, 0x203328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203328u;
label_203328:
    // 0x203328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x203328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20332c:
    // 0x20332c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20332cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203338: 0x3e00008  jr          $ra
    ctx->pc = 0x203338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203338u;
        // 0x20333c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203340u;
}
