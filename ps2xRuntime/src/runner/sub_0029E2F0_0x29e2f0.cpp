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

// Function: sub_0029E2F0
// Address: 0x29e2f0 - 0x29e498
void sub_0029E2F0_0x29e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E2F0_0x29e2f0");
#endif

    switch (ctx->pc) {
        case 0x29e3b4u: goto label_29e3b4;
        case 0x29e3e8u: goto label_29e3e8;
        case 0x29e410u: goto label_29e410;
        case 0x29e458u: goto label_29e458;
        case 0x29e46cu: goto label_29e46c;
        case 0x29e478u: goto label_29e478;
        case 0x29e484u: goto label_29e484;
        default: break;
    }

    ctx->pc = 0x29e2f0u;

    // 0x29e2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29e2f4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x29e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x29e2f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29e2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29e2fc: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x29e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x29e300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e308: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29e308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e30c: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x29e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x29e310: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29e310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e314: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x29e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29e318: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E318u;
    {
        const bool branch_taken_0x29e318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E318u;
        // 0x29e31c: 0xac820118  sw          $v0, 0x118($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e318) {
            ctx->pc = 0x29E350u;
            goto label_29e350;
        }
    }
    ctx->pc = 0x29E320u;
    // 0x29e320: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29e324: 0xa622006a  sh          $v0, 0x6A($s1)
    ctx->pc = 0x29e324u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x29e328: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e32c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e330: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x29e330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x29e334: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29e334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29e338: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e33c: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x29e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x29e340: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29e344: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e348: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29E348u;
    {
        const bool branch_taken_0x29e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E348u;
        // 0x29e34c: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e348) {
            ctx->pc = 0x29E378u;
            goto label_29e378;
        }
    }
    ctx->pc = 0x29E350u;
label_29e350:
    // 0x29e350: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x29e350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x29e354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29e354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e358: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x29e358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x29e35c: 0x27838208  addiu       $v1, $gp, -0x7DF8
    ctx->pc = 0x29e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935048));
    // 0x29e360: 0x24426c10  addiu       $v0, $v0, 0x6C10
    ctx->pc = 0x29e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27664));
    // 0x29e364: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x29e364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x29e368: 0xa625006a  sh          $a1, 0x6A($s1)
    ctx->pc = 0x29e368u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 106), (uint16_t)GPR_U32(ctx, 5));
    // 0x29e36c: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x29e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    // 0x29e370: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x29e370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x29e374: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x29e374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_29e378:
    // 0x29e378: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x29e378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x29e37c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29e380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e384: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x29e384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29e388: 0xae300094  sw          $s0, 0x94($s1)
    ctx->pc = 0x29e388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
    // 0x29e38c: 0x9622006a  lhu         $v0, 0x6A($s1)
    ctx->pc = 0x29e38cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 106)));
    // 0x29e390: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x29e390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e394: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x29e394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29e398: 0xae300080  sw          $s0, 0x80($s1)
    ctx->pc = 0x29e398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 16));
    // 0x29e39c: 0x9623006a  lhu         $v1, 0x6A($s1)
    ctx->pc = 0x29e39cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 106)));
    // 0x29e3a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29e3a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e3a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29e3ac: 0xc0a8454  jal         func_2A1150
    ctx->pc = 0x29E3ACu;
    SET_GPR_U32(ctx, 31, 0x29E3B4u);
    ctx->pc = 0x29E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E3ACu;
    // 0x29e3b0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1150u, 0x29E3ACu, 0x29E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E3B4u;
label_29e3b4:
    // 0x29e3b4: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x29e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x29e3b8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29e3bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x29e3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29e3c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e3c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3c4: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x29e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x29e3c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3cc: 0x96270068  lhu         $a3, 0x68($s1)
    ctx->pc = 0x29e3ccu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x29e3d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29e3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3d4: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x29e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x29e3d8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x29e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29e3dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29e3e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e3e4: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x29e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_29e3e8:
    // 0x29e3e8: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x29e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x29e3ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29e3f0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x29e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29e3f4: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x29e3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x29e3f8: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x29E3F8u;
    {
        const bool branch_taken_0x29e3f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e3f8) {
            ctx->pc = 0x29E430u;
            goto label_29e430;
        }
    }
    ctx->pc = 0x29E400u;
    // 0x29e400: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x29e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x29e404: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29e404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29e408: 0xac4300e4  sw          $v1, 0xE4($v0)
    ctx->pc = 0x29e408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 3));
    // 0x29e40c: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x29e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_29e410:
    // 0x29e410: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29e410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29e414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29e418: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x29e418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x29e41c: 0x0  nop
    ctx->pc = 0x29e41cu;
    // NOP
    // 0x29e420: 0x0  nop
    ctx->pc = 0x29e420u;
    // NOP
    // 0x29e424: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29E424u;
    {
        const bool branch_taken_0x29e424 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x29e424) {
            ctx->pc = 0x29E410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e410;
        }
    }
    ctx->pc = 0x29E42Cu;
    // 0x29e42c: 0x0  nop
    ctx->pc = 0x29e42cu;
    // NOP
label_29e430:
    // 0x29e430: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x29e430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x29e434: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x29e434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x29e438: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x29e438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x29e43c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x29E43Cu;
    {
        const bool branch_taken_0x29e43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E43Cu;
        // 0x29e440: 0x248401f0  addiu       $a0, $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e43c) {
            ctx->pc = 0x29E3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e3e8;
        }
    }
    ctx->pc = 0x29E444u;
    // 0x29e444: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x29e444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x29e448: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29e448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29e44c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x29e44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29e450: 0xc0a83dc  jal         func_2A0F70
    ctx->pc = 0x29E450u;
    SET_GPR_U32(ctx, 31, 0x29E458u);
    ctx->pc = 0x29E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E450u;
    // 0x29e454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0F70u, 0x29E450u, 0x29E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E458u;
label_29e458:
    // 0x29e458: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x29e458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x29e45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e460: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x29e464: 0xc0a7928  jal         func_29E4A0
    ctx->pc = 0x29E464u;
    SET_GPR_U32(ctx, 31, 0x29E46Cu);
    ctx->pc = 0x29E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E464u;
    // 0x29e468: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E4A0u, 0x29E464u, 0x29E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E46Cu;
label_29e46c:
    // 0x29e46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e470: 0xc0a8968  jal         func_2A25A0
    ctx->pc = 0x29E470u;
    SET_GPR_U32(ctx, 31, 0x29E478u);
    ctx->pc = 0x29E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E470u;
    // 0x29e474: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A25A0u, 0x29E470u, 0x29E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E478u;
label_29e478:
    // 0x29e478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e47c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29E47Cu;
    SET_GPR_U32(ctx, 31, 0x29E484u);
    ctx->pc = 0x29E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E47Cu;
    // 0x29e480: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD0u, 0x29E47Cu, 0x29E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E484u;
label_29e484:
    // 0x29e484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29e484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e48c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e490: 0x3e00008  jr          $ra
    ctx->pc = 0x29E490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E490u;
        // 0x29e494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E498u;
}
