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

// Function: sub_0035C650
// Address: 0x35c650 - 0x35c734
void sub_0035C650_0x35c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C650_0x35c650");
#endif

    switch (ctx->pc) {
        case 0x35c670u: goto label_35c670;
        case 0x35c688u: goto label_35c688;
        case 0x35c6a8u: goto label_35c6a8;
        case 0x35c6b8u: goto label_35c6b8;
        case 0x35c6c8u: goto label_35c6c8;
        case 0x35c710u: goto label_35c710;
        default: break;
    }

    ctx->pc = 0x35c650u;

    // 0x35c650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35c654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35c658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35c660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35c664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c668: 0xc04150c  jal         func_105430
    ctx->pc = 0x35C668u;
    SET_GPR_U32(ctx, 31, 0x35C670u);
    ctx->pc = 0x35C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C668u;
    // 0x35c66c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x35C668u, 0x35C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C670u;
label_35c670:
    // 0x35c670: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c674: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35c674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35c678: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35c678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c67c: 0xc44001bc  lwc1        $f0, 0x1BC($v0)
    ctx->pc = 0x35c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c680: 0xc041588  jal         func_105620
    ctx->pc = 0x35C680u;
    SET_GPR_U32(ctx, 31, 0x35C688u);
    ctx->pc = 0x35C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C680u;
    // 0x35c684: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x35C680u, 0x35C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C688u;
label_35c688:
    // 0x35c688: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35c68c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35c68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c690: 0x24428740  addiu       $v0, $v0, -0x78C0
    ctx->pc = 0x35c690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936384));
    // 0x35c694: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x35c694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x35c698: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35c698u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x658740u));
    // 0x35c69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6a0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x35C6A0u;
    SET_GPR_U32(ctx, 31, 0x35C6A8u);
    ctx->pc = 0x35C6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6A0u;
    // 0x35c6a4: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x35C6A0u, 0x35C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6A8u;
label_35c6a8:
    // 0x35c6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6ac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35c6b0: 0xc041442  jal         func_105108
    ctx->pc = 0x35C6B0u;
    SET_GPR_U32(ctx, 31, 0x35C6B8u);
    ctx->pc = 0x35C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6B0u;
    // 0x35c6b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x35C6B0u, 0x35C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6B8u;
label_35c6b8:
    // 0x35c6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x35c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c6c0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x35C6C0u;
    SET_GPR_U32(ctx, 31, 0x35C6C8u);
    ctx->pc = 0x35C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6C0u;
    // 0x35c6c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x35C6C0u, 0x35C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6C8u;
label_35c6c8:
    // 0x35c6c8: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c6cc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x35c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x35c6d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x35c6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35c6d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35c6d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x35c6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35c6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35c6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c6e0: 0xc46101bc  lwc1        $f1, 0x1BC($v1)
    ctx->pc = 0x35c6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c6e4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x35c6e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x35c6e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x35c6e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35c6ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35c6ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35c6f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35c6f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35c6f4: 0x0  nop
    ctx->pc = 0x35c6f4u;
    // NOP
    // 0x35c6f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35c6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35c6fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35c6fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35c700: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x35c700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x35c704: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35c704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35c708: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x35C708u;
    SET_GPR_U32(ctx, 31, 0x35C710u);
    ctx->pc = 0x35C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C708u;
    // 0x35c70c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x35C708u, 0x35C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C710u;
label_35c710:
    // 0x35c710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35c710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c714: 0x0  nop
    ctx->pc = 0x35c714u;
    // NOP
    // 0x35c718: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35c718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35c71c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x35c71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x35c720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35c720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c72c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C72Cu;
        // 0x35c730: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C734u;
}
