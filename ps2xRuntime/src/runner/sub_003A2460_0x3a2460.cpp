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

// Function: sub_003A2460
// Address: 0x3a2460 - 0x3a2544
void sub_003A2460_0x3a2460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2460_0x3a2460");
#endif

    switch (ctx->pc) {
        case 0x3a2480u: goto label_3a2480;
        case 0x3a2498u: goto label_3a2498;
        case 0x3a24b8u: goto label_3a24b8;
        case 0x3a24c8u: goto label_3a24c8;
        case 0x3a24d8u: goto label_3a24d8;
        case 0x3a2520u: goto label_3a2520;
        default: break;
    }

    ctx->pc = 0x3a2460u;

    // 0x3a2460: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a2460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3a2464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a2464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a2468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a2468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a246c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a2470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a2470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2474: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a2474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2478: 0xc04150c  jal         func_105430
    ctx->pc = 0x3A2478u;
    SET_GPR_U32(ctx, 31, 0x3A2480u);
    ctx->pc = 0x3A247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2478u;
    // 0x3a247c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x3A2478u, 0x3A2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2480u;
label_3a2480:
    // 0x3a2480: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2484: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3a2484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a2488: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a2488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a248c: 0xc44001bc  lwc1        $f0, 0x1BC($v0)
    ctx->pc = 0x3a248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2490: 0xc041588  jal         func_105620
    ctx->pc = 0x3A2490u;
    SET_GPR_U32(ctx, 31, 0x3A2498u);
    ctx->pc = 0x3A2494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2490u;
    // 0x3a2494: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x3A2490u, 0x3A2498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2498u;
label_3a2498:
    // 0x3a2498: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a2498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a249c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3a249cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a24a0: 0x2442d0c0  addiu       $v0, $v0, -0x2F40
    ctx->pc = 0x3a24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955200));
    // 0x3a24a4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3a24a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3a24a8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a24a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65D0C0u));
    // 0x3a24ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a24acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a24b0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3A24B0u;
    SET_GPR_U32(ctx, 31, 0x3A24B8u);
    ctx->pc = 0x3A24B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A24B0u;
    // 0x3a24b4: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3A24B0u, 0x3A24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A24B8u;
label_3a24b8:
    // 0x3a24b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a24b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a24bc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3a24bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a24c0: 0xc041442  jal         func_105108
    ctx->pc = 0x3A24C0u;
    SET_GPR_U32(ctx, 31, 0x3A24C8u);
    ctx->pc = 0x3A24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A24C0u;
    // 0x3a24c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3A24C0u, 0x3A24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A24C8u;
label_3a24c8:
    // 0x3a24c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a24c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a24cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3a24ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a24d0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3A24D0u;
    SET_GPR_U32(ctx, 31, 0x3A24D8u);
    ctx->pc = 0x3A24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A24D0u;
    // 0x3a24d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3A24D0u, 0x3A24D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A24D8u;
label_3a24d8:
    // 0x3a24d8: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a24dc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3a24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3a24e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a24e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a24e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3a24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3a24e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3a24e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a24ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a24ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a24f0: 0xc46101bc  lwc1        $f1, 0x1BC($v1)
    ctx->pc = 0x3a24f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a24f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a24f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a24f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3a24f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3a24fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a24fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a2500: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a2500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a2504: 0x0  nop
    ctx->pc = 0x3a2504u;
    // NOP
    // 0x3a2508: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3a2508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a250c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a250cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a2510: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3a2510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3a2514: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3a2514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a2518: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3A2518u;
    SET_GPR_U32(ctx, 31, 0x3A2520u);
    ctx->pc = 0x3A251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2518u;
    // 0x3a251c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3A2518u, 0x3A2520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2520u;
label_3a2520:
    // 0x3a2520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2524: 0x0  nop
    ctx->pc = 0x3a2524u;
    // NOP
    // 0x3a2528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a2528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a252c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3a252cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3a2530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a2530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a2534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a2538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a253c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A253Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A253Cu;
        // 0x3a2540: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A253Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2544u;
}
