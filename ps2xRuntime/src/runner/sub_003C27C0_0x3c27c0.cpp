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

// Function: sub_003C27C0
// Address: 0x3c27c0 - 0x3c2980
void sub_003C27C0_0x3c27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C27C0_0x3c27c0");
#endif

    switch (ctx->pc) {
        case 0x3c2828u: goto label_3c2828;
        case 0x3c2844u: goto label_3c2844;
        case 0x3c2864u: goto label_3c2864;
        case 0x3c288cu: goto label_3c288c;
        case 0x3c28a0u: goto label_3c28a0;
        default: break;
    }

    ctx->pc = 0x3c27c0u;

    // 0x3c27c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3c27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3c27c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3c27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3c27c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3c27c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3c27cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3c27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3c27d0: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x3c27d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c27d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c27d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3c27d8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3c27d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c27dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c27dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3c27e0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3c27e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c27e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c27e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3c27e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3c27e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c27ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c27ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c27f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3c27f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c27f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c27f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c27f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c27f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c27fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c27fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c2800: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3c2800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2804: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3c2804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2808: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c2808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c280c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x3c280cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x3c2810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c2810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c2814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2818: 0x240706d0  addiu       $a3, $zero, 0x6D0
    ctx->pc = 0x3c2818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1744));
    // 0x3c281c: 0x25082750  addiu       $t0, $t0, 0x2750
    ctx->pc = 0x3c281cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10064));
    // 0x3c2820: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3C2820u;
    SET_GPR_U32(ctx, 31, 0x3C2828u);
    ctx->pc = 0x3C2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2820u;
    // 0x3c2824: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3C2820u, 0x3C2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2828u;
label_3c2828:
    // 0x3c2828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c282c: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3C282Cu;
    {
        const bool branch_taken_0x3c282c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C282Cu;
        // 0x3c2830: 0x322700ff  andi        $a3, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c282c) {
            ctx->pc = 0x3C2948u;
            goto label_3c2948;
        }
    }
    ctx->pc = 0x3C2834u;
    // 0x3c2834: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3c2834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3c2838: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c2838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c283c: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x3C283Cu;
    SET_GPR_U32(ctx, 31, 0x3C2844u);
    ctx->pc = 0x3C2840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C283Cu;
    // 0x3c2840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x3C283Cu, 0x3C2844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2844u;
label_3c2844:
    // 0x3c2844: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c2844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2848: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3c2848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c284c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2850: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3c2850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3c2854: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x3c2854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3c2858: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3c2858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c285c: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3C285Cu;
    SET_GPR_U32(ctx, 31, 0x3C2864u);
    ctx->pc = 0x3C2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C285Cu;
    // 0x3c2860: 0x27aa00d0  addiu       $t2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3C285Cu, 0x3C2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2864u;
label_3c2864:
    // 0x3c2864: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3c2864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3c2868: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x3c2868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3c286c: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x3c286cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c2870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2874: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3c2874u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c2878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c287c: 0xa605052a  sh          $a1, 0x52A($s0)
    ctx->pc = 0x3c287cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c2880: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3c2880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c2884: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3C2884u;
    SET_GPR_U32(ctx, 31, 0x3C288Cu);
    ctx->pc = 0x3C2888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2884u;
    // 0x3c2888: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3C2884u, 0x3C288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C288Cu;
label_3c288c:
    // 0x3c288c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3c288cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3c2890: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c2890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2894: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c2894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c2898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c289c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c28a0:
    // 0x3c28a0: 0xacc00660  sw          $zero, 0x660($a2)
    ctx->pc = 0x3c28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1632), GPR_U32(ctx, 0));
    // 0x3c28a4: 0xa4a00696  sh          $zero, 0x696($a1)
    ctx->pc = 0x3c28a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1686), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c28a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c28a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3c28ac: 0xa4a0069e  sh          $zero, 0x69E($a1)
    ctx->pc = 0x3c28acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1694), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c28b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c28b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c28b4: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x3c28b4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x3c28b8: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x3c28b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3c28bc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3c28bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3c28c0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3c28c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3c28c4: 0x7c830560  sq          $v1, 0x560($a0)
    ctx->pc = 0x3c28c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1376), GPR_VEC(ctx, 3));
    // 0x3c28c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c28c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c28cc: 0x78235c30  lq          $v1, 0x5C30($at)
    ctx->pc = 0x3c28ccu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C30u));
    // 0x3c28d0: 0x7c830570  sq          $v1, 0x570($a0)
    ctx->pc = 0x3c28d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1392), GPR_VEC(ctx, 3));
    // 0x3c28d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c28d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c28d8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c28d8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3c28dc: 0x7c830580  sq          $v1, 0x580($a0)
    ctx->pc = 0x3c28dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1408), GPR_VEC(ctx, 3));
    // 0x3c28e0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c28e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c28e4: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x3c28e4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x3c28e8: 0x7c830590  sq          $v1, 0x590($a0)
    ctx->pc = 0x3c28e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1424), GPR_VEC(ctx, 3));
    // 0x3c28ec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3C28ECu;
    {
        const bool branch_taken_0x3c28ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28ECu;
        // 0x3c28f0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c28ec) {
            ctx->pc = 0x3C28A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c28a0;
        }
    }
    ctx->pc = 0x3C28F4u;
    // 0x3c28f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c28f8: 0xae0206a8  sw          $v0, 0x6A8($s0)
    ctx->pc = 0x3c28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 2));
    // 0x3c28fc: 0xa21706ac  sb          $s7, 0x6AC($s0)
    ctx->pc = 0x3c28fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1708), (uint8_t)GPR_U32(ctx, 23));
    // 0x3c2900: 0xae0206b0  sw          $v0, 0x6B0($s0)
    ctx->pc = 0x3c2900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1712), GPR_U32(ctx, 2));
    // 0x3c2904: 0xa21e06b4  sb          $fp, 0x6B4($s0)
    ctx->pc = 0x3c2904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1716), (uint8_t)GPR_U32(ctx, 30));
    // 0x3c2908: 0x93a200e0  lbu         $v0, 0xE0($sp)
    ctx->pc = 0x3c2908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3c290c: 0xa20206b5  sb          $v0, 0x6B5($s0)
    ctx->pc = 0x3c290cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1717), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c2910: 0xa6000692  sh          $zero, 0x692($s0)
    ctx->pc = 0x3c2910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1682), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c2914: 0xa2000694  sb          $zero, 0x694($s0)
    ctx->pc = 0x3c2914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1684), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c2918: 0xa21106b6  sb          $s1, 0x6B6($s0)
    ctx->pc = 0x3c2918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1718), (uint8_t)GPR_U32(ctx, 17));
    // 0x3c291c: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x3c291cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3c2920: 0x7e0206c0  sq          $v0, 0x6C0($s0)
    ctx->pc = 0x3c2920u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), GPR_VEC(ctx, 2));
    // 0x3c2924: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2924u;
    {
        const bool branch_taken_0x3c2924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2924u;
        // 0x3c2928: 0xae000518  sw          $zero, 0x518($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2924) {
            ctx->pc = 0x3C2938u;
            goto label_3c2938;
        }
    }
    ctx->pc = 0x3C292Cu;
    // 0x3c292c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3c2930: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x3c2930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    // 0x3c2934: 0x0  nop
    ctx->pc = 0x3c2934u;
    // NOP
label_3c2938:
    // 0x3c2938: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x3c2938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x3c293c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3c293cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c2940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2940u;
    {
        const bool branch_taken_0x3c2940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2940u;
        // 0x3c2944: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2940) {
            ctx->pc = 0x3C2950u;
            goto label_3c2950;
        }
    }
    ctx->pc = 0x3C2948u;
label_3c2948:
    // 0x3c2948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c294c: 0x0  nop
    ctx->pc = 0x3c294cu;
    // NOP
label_3c2950:
    // 0x3c2950: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c2950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c2954: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3c2954u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c2958: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3c2958u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c295c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c295cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c2960: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c2960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c2964: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c2964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c2968: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c2968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c296c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c296cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c2970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c2970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c2974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c2974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c2978: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2978u;
        // 0x3c297c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2980u;
}
