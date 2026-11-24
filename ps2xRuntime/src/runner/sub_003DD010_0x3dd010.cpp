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

// Function: sub_003DD010
// Address: 0x3dd010 - 0x3dd130
void sub_003DD010_0x3dd010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD010_0x3dd010");
#endif

    switch (ctx->pc) {
        case 0x3dd040u: goto label_3dd040;
        case 0x3dd07cu: goto label_3dd07c;
        case 0x3dd0dcu: goto label_3dd0dc;
        case 0x3dd100u: goto label_3dd100;
        default: break;
    }

    ctx->pc = 0x3dd010u;

    // 0x3dd010: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3dd010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3dd014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dd014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3dd018: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dd018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3dd01c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dd01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dd020: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dd020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3dd024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dd024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd028: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3dd02c: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x3dd02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3dd030: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3dd030u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3dd034: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3DD034u;
    {
        const bool branch_taken_0x3dd034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD034u;
        // 0x3dd038: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd034) {
            ctx->pc = 0x3DD0E0u;
            goto label_3dd0e0;
        }
    }
    ctx->pc = 0x3DD03Cu;
    // 0x3dd03c: 0x0  nop
    ctx->pc = 0x3dd03cu;
    // NOP
label_3dd040:
    // 0x3dd040: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3dd040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3dd044: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3dd044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3dd048: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3dd048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd04c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3dd04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dd050: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dd050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd054: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3dd054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3dd058: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3dd058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3dd05c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3dd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3dd060: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3dd060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3dd064: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3dd064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3dd068: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3dd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3dd06c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3dd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3dd070: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x3dd070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3dd074: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DD074u;
    SET_GPR_U32(ctx, 31, 0x3DD07Cu);
    ctx->pc = 0x3DD078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD074u;
    // 0x3dd078: 0x24520020  addiu       $s2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DD074u, 0x3DD07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD07Cu;
label_3dd07c:
    // 0x3dd07c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3dd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd080: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3dd080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dd084: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3dd084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dd088: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dd088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dd08c: 0xfa430000  sqc2        $vf3, 0x0($s2)
    ctx->pc = 0x3dd08cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dd090: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x3dd090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3dd094: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3dd094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3dd098: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3dd098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3dd09c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3dd09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dd0a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3dd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3dd0a4: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x3dd0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3dd0a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dd0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dd0ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3dd0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd0b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3dd0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3dd0b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dd0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd0b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3dd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3dd0bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd0c0: 0x0  nop
    ctx->pc = 0x3dd0c0u;
    // NOP
    // 0x3dd0c4: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x3dd0c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3dd0c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3dd0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3dd0cc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3dd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dd0d0: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x3dd0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3dd0d4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DD0D4u;
    SET_GPR_U32(ctx, 31, 0x3DD0DCu);
    ctx->pc = 0x3DD0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD0D4u;
    // 0x3dd0d8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DD0D4u, 0x3DD0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD0DCu;
label_3dd0dc:
    // 0x3dd0dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3dd0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3dd0e0:
    // 0x3dd0e0: 0x1600ffd7  bnez        $s0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3DD0E0u;
    {
        const bool branch_taken_0x3dd0e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd0e0) {
            ctx->pc = 0x3DD040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd040;
        }
    }
    ctx->pc = 0x3DD0E8u;
    // 0x3dd0e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3dd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd0ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3dd0ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3dd0f0: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x3dd0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3dd0f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3dd0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dd0f8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DD0F8u;
    SET_GPR_U32(ctx, 31, 0x3DD100u);
    ctx->pc = 0x3DD0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD0F8u;
    // 0x3dd0fc: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DD0F8u, 0x3DD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD100u;
label_3dd100:
    // 0x3dd100: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3dd100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dd104: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3dd104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dd108: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3dd108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dd10c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dd10cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dd110: 0xfa030000  sqc2        $vf3, 0x0($s0)
    ctx->pc = 0x3dd110u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dd114: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dd114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dd118: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dd11c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dd11cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dd120: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dd120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd124: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dd124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd128: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD128u;
        // 0x3dd12c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD130u;
}
