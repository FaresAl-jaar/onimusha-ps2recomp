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

// Function: sub_003DCE40
// Address: 0x3dce40 - 0x3dd010
void sub_003DCE40_0x3dce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCE40_0x3dce40");
#endif

    switch (ctx->pc) {
        case 0x3dce7cu: goto label_3dce7c;
        case 0x3dce84u: goto label_3dce84;
        case 0x3dce8cu: goto label_3dce8c;
        case 0x3dce94u: goto label_3dce94;
        case 0x3dcef8u: goto label_3dcef8;
        case 0x3dcf04u: goto label_3dcf04;
        case 0x3dcf20u: goto label_3dcf20;
        case 0x3dcf74u: goto label_3dcf74;
        case 0x3dcf88u: goto label_3dcf88;
        case 0x3dcf9cu: goto label_3dcf9c;
        case 0x3dcfa8u: goto label_3dcfa8;
        default: break;
    }

    ctx->pc = 0x3dce40u;

    // 0x3dce40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3dce44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3dce48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dce4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dce50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dce50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dce54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dce54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dce58: 0x9085001b  lbu         $a1, 0x1B($a0)
    ctx->pc = 0x3dce58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x3dce5c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3dce5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dce60: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x3DCE60u;
    {
        const bool branch_taken_0x3dce60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE60u;
        // 0x3dce64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dce60) {
            ctx->pc = 0x3DCFF8u;
            goto label_3dcff8;
        }
    }
    ctx->pc = 0x3DCE68u;
    // 0x3dce68: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3dce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3dce6c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3DCE6Cu;
    {
        const bool branch_taken_0x3dce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dce6c) {
            ctx->pc = 0x3DCEE8u;
            goto label_3dcee8;
        }
    }
    ctx->pc = 0x3DCE74u;
    // 0x3dce74: 0xc0f75c8  jal         func_3DD720
    ctx->pc = 0x3DCE74u;
    SET_GPR_U32(ctx, 31, 0x3DCE7Cu);
    ctx->pc = 0x3DD720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD720u, 0x3DCE74u, 0x3DCE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE7Cu;
label_3dce7c:
    // 0x3dce7c: 0xc0f75d8  jal         func_3DD760
    ctx->pc = 0x3DCE7Cu;
    SET_GPR_U32(ctx, 31, 0x3DCE84u);
    ctx->pc = 0x3DCE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCE7Cu;
    // 0x3dce80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD760u, 0x3DCE7Cu, 0x3DCE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE84u;
label_3dce84:
    // 0x3dce84: 0xc0f75ac  jal         func_3DD6B0
    ctx->pc = 0x3DCE84u;
    SET_GPR_U32(ctx, 31, 0x3DCE8Cu);
    ctx->pc = 0x3DCE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCE84u;
    // 0x3dce88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD6B0u, 0x3DCE84u, 0x3DCE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE8Cu;
label_3dce8c:
    // 0x3dce8c: 0xc0f756c  jal         func_3DD5B0
    ctx->pc = 0x3DCE8Cu;
    SET_GPR_U32(ctx, 31, 0x3DCE94u);
    ctx->pc = 0x3DCE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCE8Cu;
    // 0x3dce90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD5B0u, 0x3DCE8Cu, 0x3DCE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE94u;
label_3dce94:
    // 0x3dce94: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3dce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3dce98: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3dce98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3dce9c: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x3dce9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3dcea0: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x3dcea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3dcea4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dcea8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dceac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3dceacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3dceb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dceb4: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x3dceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3dceb8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3dceb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dcebc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3dcebcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3dcec0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x3dcec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3dcec4: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x3dcec4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x3dcec8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x3dcec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3dcecc: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x3dceccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x3dced0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x3dced0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3dced4: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x3dced4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x3dced8: 0x9222001b  lbu         $v0, 0x1B($s1)
    ctx->pc = 0x3dced8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x3dcedc: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x3dcedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x3dcee0: 0xa222001b  sb          $v0, 0x1B($s1)
    ctx->pc = 0x3dcee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dcee4: 0x0  nop
    ctx->pc = 0x3dcee4u;
    // NOP
label_3dcee8:
    // 0x3dcee8: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3DCEE8u;
    {
        const bool branch_taken_0x3dcee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEE8u;
        // 0x3dceec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcee8) {
            ctx->pc = 0x3DCFA0u;
            goto label_3dcfa0;
        }
    }
    ctx->pc = 0x3DCEF0u;
    // 0x3dcef0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3DCEF0u;
    {
        const bool branch_taken_0x3dcef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dcef0) {
            ctx->pc = 0x3DCF08u;
            goto label_3dcf08;
        }
    }
    ctx->pc = 0x3DCEF8u;
label_3dcef8:
    // 0x3dcef8: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x3dcef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3dcefc: 0xc0f778c  jal         func_3DDE30
    ctx->pc = 0x3DCEFCu;
    SET_GPR_U32(ctx, 31, 0x3DCF04u);
    ctx->pc = 0x3DCF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCEFCu;
    // 0x3dcf00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDE30u, 0x3DCEFCu, 0x3DCF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF04u;
label_3dcf04:
    // 0x3dcf04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3dcf04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3dcf08:
    // 0x3dcf08: 0x9222001a  lbu         $v0, 0x1A($s1)
    ctx->pc = 0x3dcf08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x3dcf0c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3dcf0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dcf10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3DCF10u;
    {
        const bool branch_taken_0x3dcf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF10u;
        // 0x3dcf14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcf10) {
            ctx->pc = 0x3DCEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dcef8;
        }
    }
    ctx->pc = 0x3DCF18u;
    // 0x3dcf18: 0xc0f7638  jal         func_3DD8E0
    ctx->pc = 0x3DCF18u;
    SET_GPR_U32(ctx, 31, 0x3DCF20u);
    ctx->pc = 0x3DD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD8E0u, 0x3DCF18u, 0x3DCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF20u;
label_3dcf20:
    // 0x3dcf20: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3dcf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3dcf24: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x3dcf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x3dcf28: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x3dcf28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3dcf2c: 0x26260060  addiu       $a2, $s1, 0x60
    ctx->pc = 0x3dcf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3dcf30: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x3dcf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3dcf34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3dcf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3dcf38: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dcf38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dcf3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dcf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dcf40: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3dcf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3dcf44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dcf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dcf48: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3dcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3dcf4c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3dcf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3dcf50: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3dcf50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dcf54: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x3dcf54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3dcf58: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dcf58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dcf5c: 0xf8c30000  sqc2        $vf3, 0x0($a2)
    ctx->pc = 0x3dcf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dcf60: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x3dcf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x3dcf64: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3dcf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3dcf68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dcf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3dcf6c: 0xc0f754c  jal         func_3DD530
    ctx->pc = 0x3DCF6Cu;
    SET_GPR_U32(ctx, 31, 0x3DCF74u);
    ctx->pc = 0x3DCF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF6Cu;
    // 0x3dcf70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD530u, 0x3DCF6Cu, 0x3DCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF74u;
label_3dcf74:
    // 0x3dcf74: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3dcf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x3dcf78: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3dcf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3dcf7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dcf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3dcf80: 0xc0f7404  jal         func_3DD010
    ctx->pc = 0x3DCF80u;
    SET_GPR_U32(ctx, 31, 0x3DCF88u);
    ctx->pc = 0x3DCF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF80u;
    // 0x3dcf84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD010u, 0x3DCF80u, 0x3DCF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF88u;
label_3dcf88:
    // 0x3dcf88: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x3dcf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x3dcf8c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3dcf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3dcf90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dcf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3dcf94: 0xc0f744c  jal         func_3DD130
    ctx->pc = 0x3DCF94u;
    SET_GPR_U32(ctx, 31, 0x3DCF9Cu);
    ctx->pc = 0x3DCF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF94u;
    // 0x3dcf98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD130u, 0x3DCF94u, 0x3DCF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF9Cu;
label_3dcf9c:
    // 0x3dcf9c: 0x0  nop
    ctx->pc = 0x3dcf9cu;
    // NOP
label_3dcfa0:
    // 0x3dcfa0: 0xc0f76f8  jal         func_3DDBE0
    ctx->pc = 0x3DCFA0u;
    SET_GPR_U32(ctx, 31, 0x3DCFA8u);
    ctx->pc = 0x3DCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCFA0u;
    // 0x3dcfa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDBE0u, 0x3DCFA0u, 0x3DCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCFA8u;
label_3dcfa8:
    // 0x3dcfa8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DCFA8u;
    {
        const bool branch_taken_0x3dcfa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dcfa8) {
            ctx->pc = 0x3DCFF8u;
            goto label_3dcff8;
        }
    }
    ctx->pc = 0x3DCFB0u;
    // 0x3dcfb0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3dcfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3dcfb4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3dcfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3dcfb8: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x3dcfb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3dcfbc: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x3dcfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3dcfc0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3dcfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3dcfc4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3dcfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3dcfc8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3dcfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dcfcc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3dcfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3dcfd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3dcfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dcfd4: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x3dcfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3dcfd8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3dcfd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dcfdc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3dcfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3dcfe0: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x3dcfe0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3dcfe4: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x3dcfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x3dcfe8: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x3dcfe8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3dcfec: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x3dcfecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x3dcff0: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x3dcff0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3dcff4: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x3dcff4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
label_3dcff8:
    // 0x3dcff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dcff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dcffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dcffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dd000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dd004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd008: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD008u;
        // 0x3dd00c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD010u;
}
