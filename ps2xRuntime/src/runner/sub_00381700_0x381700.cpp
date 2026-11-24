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

// Function: sub_00381700
// Address: 0x381700 - 0x381870
void sub_00381700_0x381700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381700_0x381700");
#endif

    switch (ctx->pc) {
        case 0x381728u: goto label_381728;
        case 0x381794u: goto label_381794;
        case 0x3817c0u: goto label_3817c0;
        case 0x3817ccu: goto label_3817cc;
        case 0x3817dcu: goto label_3817dc;
        case 0x381838u: goto label_381838;
        default: break;
    }

    ctx->pc = 0x381700u;

    // 0x381700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x381700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x381704: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x381704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x381708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x381708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x38170c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x381710: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x381710u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381714: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x381718: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x381718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38171c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x381720: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x381720u;
    {
        const bool branch_taken_0x381720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381720u;
        // 0x381724: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381720) {
            ctx->pc = 0x381840u;
            goto label_381840;
        }
    }
    ctx->pc = 0x381728u;
label_381728:
    // 0x381728: 0x26720008  addiu       $s2, $s3, 0x8
    ctx->pc = 0x381728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x38172c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x38172cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x381730: 0x8e88004c  lw          $t0, 0x4C($s4)
    ctx->pc = 0x381730u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x381734: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x381734u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x381738: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x381738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x38173c: 0x8e822b38  lw          $v0, 0x2B38($s4)
    ctx->pc = 0x38173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11064)));
    // 0x381740: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x381740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x381744: 0x123980  sll         $a3, $s2, 6
    ctx->pc = 0x381744u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x381748: 0x8d060094  lw          $a2, 0x94($t0)
    ctx->pc = 0x381748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
    // 0x38174c: 0x8d05006c  lw          $a1, 0x6C($t0)
    ctx->pc = 0x38174cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 108)));
    // 0x381750: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x381750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x381754: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x381754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x381758: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x381758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38175c: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x38175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x381760: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x381760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x381764: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x381764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x381768: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x381768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38176c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x38176cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x381770: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x381770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x381774: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x381774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x381778: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x381778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38177c: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x38177cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x381780: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x381780u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x381784: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x381784u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x381788: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x381788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x38178c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x38178Cu;
    SET_GPR_U32(ctx, 31, 0x381794u);
    ctx->pc = 0x381790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38178Cu;
    // 0x381790: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x38178Cu, 0x381794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381794u;
label_381794:
    // 0x381794: 0x8e822b3c  lw          $v0, 0x2B3C($s4)
    ctx->pc = 0x381794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11068)));
    // 0x381798: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x381798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x38179c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38179cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3817a0: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x3817a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3817a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3817a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3817a8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3817a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3817ac: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3817acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3817b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3817b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3817b4: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3817b4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3817b8: 0xc041460  jal         func_105180
    ctx->pc = 0x3817B8u;
    SET_GPR_U32(ctx, 31, 0x3817C0u);
    ctx->pc = 0x3817BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3817B8u;
    // 0x3817bc: 0x7ce80000  sq          $t0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3817B8u, 0x3817C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3817C0u;
label_3817c0:
    // 0x3817c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3817c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3817c4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3817C4u;
    SET_GPR_U32(ctx, 31, 0x3817CCu);
    ctx->pc = 0x3817C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3817C4u;
    // 0x3817c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3817C4u, 0x3817CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3817CCu;
label_3817cc:
    // 0x3817cc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3817ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3817d0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3817d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3817d4: 0xc041460  jal         func_105180
    ctx->pc = 0x3817D4u;
    SET_GPR_U32(ctx, 31, 0x3817DCu);
    ctx->pc = 0x3817D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3817D4u;
    // 0x3817d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3817D4u, 0x3817DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3817DCu;
label_3817dc:
    // 0x3817dc: 0x8e842b38  lw          $a0, 0x2B38($s4)
    ctx->pc = 0x3817dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11064)));
    // 0x3817e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3817e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3817e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3817e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3817e8: 0x133900  sll         $a3, $s3, 4
    ctx->pc = 0x3817e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3817ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3817ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3817f0: 0x26280030  addiu       $t0, $s1, 0x30
    ctx->pc = 0x3817f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3817f4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3817f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3817f8: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x3817f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x3817fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3817fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x381800: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x381800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x381804: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x381804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x381808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x381808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38180c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x38180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x381810: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x381810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x381814: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x381814u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x381818: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x381818u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x38181c: 0xe622001c  swc1        $f2, 0x1C($s1)
    ctx->pc = 0x38181cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x381820: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x381820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x381824: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x381824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x381828: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x381828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x38182c: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x38182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x381830: 0xc04144e  jal         func_105138
    ctx->pc = 0x381830u;
    SET_GPR_U32(ctx, 31, 0x381838u);
    ctx->pc = 0x381834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381830u;
    // 0x381834: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x381830u, 0x381838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381838u;
label_381838:
    // 0x381838: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x381838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x38183c: 0x0  nop
    ctx->pc = 0x38183cu;
    // NOP
label_381840:
    // 0x381840: 0x8e832b30  lw          $v1, 0x2B30($s4)
    ctx->pc = 0x381840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11056)));
    // 0x381844: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x381844u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x381848: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x381848u;
    {
        const bool branch_taken_0x381848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x381848) {
            ctx->pc = 0x381728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381728;
        }
    }
    ctx->pc = 0x381850u;
    // 0x381850: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x381850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x381854: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x381854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x381858: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x381858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38185c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38185cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381868: 0x3e00008  jr          $ra
    ctx->pc = 0x381868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381868u;
        // 0x38186c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381870u;
}
