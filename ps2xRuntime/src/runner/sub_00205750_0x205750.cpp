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

// Function: sub_00205750
// Address: 0x205750 - 0x2057f8
void sub_00205750_0x205750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205750_0x205750");
#endif

    switch (ctx->pc) {
        case 0x205768u: goto label_205768;
        case 0x20577cu: goto label_20577c;
        case 0x205784u: goto label_205784;
        default: break;
    }

    ctx->pc = 0x205750u;

    // 0x205750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20575c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205760: 0xc081544  jal         func_205510
    ctx->pc = 0x205760u;
    SET_GPR_U32(ctx, 31, 0x205768u);
    ctx->pc = 0x205764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205760u;
    // 0x205764: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x205760u, 0x205768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205768u;
label_205768:
    // 0x205768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x205768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20576c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20576cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205774: 0xc049590  jal         func_125640
    ctx->pc = 0x205774u;
    SET_GPR_U32(ctx, 31, 0x20577Cu);
    ctx->pc = 0x205778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205774u;
    // 0x205778: 0x24061890  addiu       $a2, $zero, 0x1890 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x205774u, 0x20577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20577Cu;
label_20577c:
    // 0x20577c: 0xc083144  jal         func_20C510
    ctx->pc = 0x20577Cu;
    SET_GPR_U32(ctx, 31, 0x205784u);
    ctx->pc = 0x205780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20577Cu;
    // 0x205780: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C510u, 0x20577Cu, 0x205784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205784u;
label_205784:
    // 0x205784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205788: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x205788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x20578c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x20578Cu;
    {
        const bool branch_taken_0x20578c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20578Cu;
        // 0x205790: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20578c) {
            ctx->pc = 0x2057B8u;
            goto label_2057b8;
        }
    }
    ctx->pc = 0x205794u;
    // 0x205794: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x205794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x205798: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x205798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20579c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x20579cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2057a0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2057a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2057a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2057a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2057a8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2057a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2057ac: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2057acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2057b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2057B0u;
    {
        const bool branch_taken_0x2057b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B0u;
        // 0x2057b4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057b0) {
            ctx->pc = 0x2057D4u;
            goto label_2057d4;
        }
    }
    ctx->pc = 0x2057B8u;
label_2057b8:
    // 0x2057b8: 0x3c01426f  lui         $at, 0x426F
    ctx->pc = 0x2057b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17007 << 16));
    // 0x2057bc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2057bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2057c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2057c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2057c4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2057c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2057c8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2057c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2057cc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2057ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2057d0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2057d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2057d4:
    // 0x2057d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2057d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2057d8: 0xae20188c  sw          $zero, 0x188C($s1)
    ctx->pc = 0x2057d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6284), GPR_U32(ctx, 0));
    // 0x2057dc: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2057dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x2057e0: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2057e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x2057e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2057e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2057e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2057e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2057ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2057ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2057f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2057F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2057F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F0u;
        // 0x2057f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2057F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2057F8u;
}
