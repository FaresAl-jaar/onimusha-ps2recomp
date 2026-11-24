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

// Function: sub_002D85C0
// Address: 0x2d85c0 - 0x2d8924
void sub_002D85C0_0x2d85c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D85C0_0x2d85c0");
#endif

    switch (ctx->pc) {
        case 0x2d8628u: goto label_2d8628;
        case 0x2d8714u: goto label_2d8714;
        case 0x2d876cu: goto label_2d876c;
        case 0x2d87c4u: goto label_2d87c4;
        case 0x2d883cu: goto label_2d883c;
        case 0x2d8890u: goto label_2d8890;
        case 0x2d88e4u: goto label_2d88e4;
        case 0x2d88f0u: goto label_2d88f0;
        default: break;
    }

    ctx->pc = 0x2d85c0u;

    // 0x2d85c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d85c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d85c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d85c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d85c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d85c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d85cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d85ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d85d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d85d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d85d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d85d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d85d8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d85d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d85dc: 0x30a34000  andi        $v1, $a1, 0x4000
    ctx->pc = 0x2d85dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x2d85e0: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2D85E0u;
    {
        const bool branch_taken_0x2d85e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85E0u;
        // 0x2d85e4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85e0) {
            ctx->pc = 0x2D8908u;
            goto label_2d8908;
        }
    }
    ctx->pc = 0x2D85E8u;
    // 0x2d85e8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2d85e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d85ec: 0x146000c6  bnez        $v1, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2D85ECu;
    {
        const bool branch_taken_0x2d85ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d85ec) {
            ctx->pc = 0x2D8908u;
            goto label_2d8908;
        }
    }
    ctx->pc = 0x2D85F4u;
    // 0x2d85f4: 0xa6600034  sh          $zero, 0x34($s3)
    ctx->pc = 0x2d85f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d85f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d85f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d85fc: 0xa6600036  sh          $zero, 0x36($s3)
    ctx->pc = 0x2d85fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d8600: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d8604: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x2d8604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2d8608: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x2d8608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2d860c: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x2d860cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
    // 0x2d8610: 0xae65003c  sw          $a1, 0x3C($s3)
    ctx->pc = 0x2d8610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 5));
    // 0x2d8614: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x2d8614u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2d8618: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d8618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d861c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d861cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d8620: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D8620u;
    SET_GPR_U32(ctx, 31, 0x2D8628u);
    ctx->pc = 0x2D8624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8620u;
    // 0x2d8624: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48B0u, 0x2D8620u, 0x2D8628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8628u;
label_2d8628:
    // 0x2d8628: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d8628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d862c: 0x86660072  lh          $a2, 0x72($s3)
    ctx->pc = 0x2d862cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
    // 0x2d8630: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2d8630u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2d8634: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2d8634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2d8638: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8638u;
    {
        const bool branch_taken_0x2d8638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8638u;
        // 0x2d863c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8638) {
            ctx->pc = 0x2D8688u;
            goto label_2d8688;
        }
    }
    ctx->pc = 0x2D8640u;
    // 0x2d8640: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2d8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2d8644: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2d8644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2d8648: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8648u;
    {
        const bool branch_taken_0x2d8648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8648u;
        // 0x2d864c: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8648) {
            ctx->pc = 0x2D8680u;
            goto label_2d8680;
        }
    }
    ctx->pc = 0x2D8650u;
    // 0x2d8650: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2d8650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2d8654: 0x8424659c  lh          $a0, 0x659C($at)
    ctx->pc = 0x2d8654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 26012)));
    // 0x2d8658: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d8658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d865c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d865cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8660: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2d8660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d8664: 0x842265a0  lh          $v0, 0x65A0($at)
    ctx->pc = 0x2d8664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 26016)));
    // 0x2d8668: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d8668u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d866c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2d866cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d8670: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2d8670u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d8674: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d8674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d8678: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8678u;
    {
        const bool branch_taken_0x2d8678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8678u;
        // 0x2d867c: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8678) {
            ctx->pc = 0x2D8688u;
            goto label_2d8688;
        }
    }
    ctx->pc = 0x2D8680u;
label_2d8680:
    // 0x2d8680: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d8680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d8684: 0x0  nop
    ctx->pc = 0x2d8684u;
    // NOP
label_2d8688:
    // 0x2d8688: 0x92620071  lbu         $v0, 0x71($s3)
    ctx->pc = 0x2d8688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 113)));
    // 0x2d868c: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x2d868cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2d8690: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x2D8690u;
    {
        const bool branch_taken_0x2d8690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8690) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D8698u;
    // 0x2d8698: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x2d8698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d869c: 0x58c3c  dsll32      $s1, $a1, 16
    ctx->pc = 0x2d869cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d86a0: 0x6843c  dsll32      $s0, $a2, 16
    ctx->pc = 0x2d86a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d86a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d86a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d86a8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d86a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d86ac: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d86acu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d86b0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d86b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d86b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d86b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86b8: 0x24a56560  addiu       $a1, $a1, 0x6560
    ctx->pc = 0x2d86b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25952));
    // 0x2d86bc: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d86bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d86c0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d86c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d86c4: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x2d86c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x2d86c8: 0x84266564  lh          $a2, 0x6564($at)
    ctx->pc = 0x2d86c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25956)));
    // 0x2d86cc: 0x92670071  lbu         $a3, 0x71($s3)
    ctx->pc = 0x2d86ccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 113)));
    // 0x2d86d0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d86d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d86d4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2d86d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2d86d8: 0x84236566  lh          $v1, 0x6566($at)
    ctx->pc = 0x2d86d8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6566u));
    // 0x2d86dc: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2d86dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d86e0: 0x79600  sll         $s2, $a3, 24
    ctx->pc = 0x2d86e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2d86e4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d86e4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d86e8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d86e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d86ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d86f0: 0x8c226560  lw          $v0, 0x6560($at)
    ctx->pc = 0x2d86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E6560u));
    // 0x2d86f4: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x2d86f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d86f8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d86f8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d86fc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d86fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8700: 0x84286568  lh          $t0, 0x6568($at)
    ctx->pc = 0x2d8700u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6568u));
    // 0x2d8704: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8708: 0x8429656a  lh          $t1, 0x656A($at)
    ctx->pc = 0x2d8708u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E656Au));
    // 0x2d870c: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D870Cu;
    SET_GPR_U32(ctx, 31, 0x2D8714u);
    ctx->pc = 0x2D8710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D870Cu;
    // 0x2d8710: 0x525025  or          $t2, $v0, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D870Cu, 0x2D8714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8714u;
label_2d8714:
    // 0x2d8714: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8718: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d8718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d871c: 0x84266580  lh          $a2, 0x6580($at)
    ctx->pc = 0x2d871cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x4E6580u));
    // 0x2d8720: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8724: 0x24a5657c  addiu       $a1, $a1, 0x657C
    ctx->pc = 0x2d8724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25980));
    // 0x2d8728: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d8728u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d872c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d872cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8730: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2d8730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2d8734: 0x84236582  lh          $v1, 0x6582($at)
    ctx->pc = 0x2d8734u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6582u));
    // 0x2d8738: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2d8738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d873c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d873cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d8740: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8744: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d8744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d8748: 0x8c22657c  lw          $v0, 0x657C($at)
    ctx->pc = 0x2d8748u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E657Cu));
    // 0x2d874c: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x2d874cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8750: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d8750u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d8754: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8758: 0x84286584  lh          $t0, 0x6584($at)
    ctx->pc = 0x2d8758u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6584u));
    // 0x2d875c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8760: 0x84296586  lh          $t1, 0x6586($at)
    ctx->pc = 0x2d8760u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E6586u));
    // 0x2d8764: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D8764u;
    SET_GPR_U32(ctx, 31, 0x2D876Cu);
    ctx->pc = 0x2D8768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8764u;
    // 0x2d8768: 0x525025  or          $t2, $v0, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D8764u, 0x2D876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D876Cu;
label_2d876c:
    // 0x2d876c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d876cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8770: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d8770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d8774: 0x8426659c  lh          $a2, 0x659C($at)
    ctx->pc = 0x2d8774u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x4E659Cu));
    // 0x2d8778: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d877c: 0x24a56598  addiu       $a1, $a1, 0x6598
    ctx->pc = 0x2d877cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26008));
    // 0x2d8780: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d8780u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d8784: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8788: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2d8788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2d878c: 0x8423659e  lh          $v1, 0x659E($at)
    ctx->pc = 0x2d878cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E659Eu));
    // 0x2d8790: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2d8790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d8794: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d8794u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d8798: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d879c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d879cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d87a0: 0x8c226598  lw          $v0, 0x6598($at)
    ctx->pc = 0x2d87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4E6598u));
    // 0x2d87a4: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x2d87a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d87a8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d87a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d87ac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d87acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d87b0: 0x842865a0  lh          $t0, 0x65A0($at)
    ctx->pc = 0x2d87b0u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E65A0u));
    // 0x2d87b4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d87b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d87b8: 0x842965a2  lh          $t1, 0x65A2($at)
    ctx->pc = 0x2d87b8u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E65A2u));
    // 0x2d87bc: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D87BCu;
    SET_GPR_U32(ctx, 31, 0x2D87C4u);
    ctx->pc = 0x2D87C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87BCu;
    // 0x2d87c0: 0x525025  or          $t2, $v0, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D87BCu, 0x2D87C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87C4u;
label_2d87c4:
    // 0x2d87c4: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x2d87c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d87c8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2d87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2d87cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d87ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d87d0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2D87D0u;
    {
        const bool branch_taken_0x2d87d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87D0u;
        // 0x2d87d4: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87d0) {
            ctx->pc = 0x2D88E8u;
            goto label_2d88e8;
        }
    }
    ctx->pc = 0x2D87D8u;
label_2d87d8:
    // 0x2d87d8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d87d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d87dc: 0x84236564  lh          $v1, 0x6564($at)
    ctx->pc = 0x2d87dcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6564u));
    // 0x2d87e0: 0x58c3c  dsll32      $s1, $a1, 16
    ctx->pc = 0x2d87e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d87e4: 0x6843c  dsll32      $s0, $a2, 16
    ctx->pc = 0x2d87e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d87e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d87e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d87ec: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d87ecu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d87f0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d87f0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d87f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d87f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d87f8: 0x24a56560  addiu       $a1, $a1, 0x6560
    ctx->pc = 0x2d87f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25952));
    // 0x2d87fc: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d87fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d8800: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8804: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d8804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d8808: 0x84226566  lh          $v0, 0x6566($at)
    ctx->pc = 0x2d8808u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6566u));
    // 0x2d880c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d880cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8810: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d8810u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d8814: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8818: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d8818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d881c: 0x84286568  lh          $t0, 0x6568($at)
    ctx->pc = 0x2d881cu;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6568u));
    // 0x2d8820: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d8820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d8824: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8828: 0x8429656a  lh          $t1, 0x656A($at)
    ctx->pc = 0x2d8828u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E656Au));
    // 0x2d882c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d882cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8830: 0x8c2a6560  lw          $t2, 0x6560($at)
    ctx->pc = 0x2d8830u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E6560u));
    // 0x2d8834: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D8834u;
    SET_GPR_U32(ctx, 31, 0x2D883Cu);
    ctx->pc = 0x2D8838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8834u;
    // 0x2d8838: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D8834u, 0x2D883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D883Cu;
label_2d883c:
    // 0x2d883c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d883cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8840: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d8840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d8844: 0x84236580  lh          $v1, 0x6580($at)
    ctx->pc = 0x2d8844u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6580u));
    // 0x2d8848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d884c: 0x24a5657c  addiu       $a1, $a1, 0x657C
    ctx->pc = 0x2d884cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25980));
    // 0x2d8850: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d8850u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d8854: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8858: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d8858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d885c: 0x84226582  lh          $v0, 0x6582($at)
    ctx->pc = 0x2d885cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6582u));
    // 0x2d8860: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d8860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8864: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d8864u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d8868: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d886c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d8870: 0x84286584  lh          $t0, 0x6584($at)
    ctx->pc = 0x2d8870u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6584u));
    // 0x2d8874: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d8874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d8878: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d887c: 0x84296586  lh          $t1, 0x6586($at)
    ctx->pc = 0x2d887cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E6586u));
    // 0x2d8880: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8884: 0x8c2a657c  lw          $t2, 0x657C($at)
    ctx->pc = 0x2d8884u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E657Cu));
    // 0x2d8888: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D8888u;
    SET_GPR_U32(ctx, 31, 0x2D8890u);
    ctx->pc = 0x2D888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8888u;
    // 0x2d888c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D8888u, 0x2D8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8890u;
label_2d8890:
    // 0x2d8890: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8894: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d8894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d8898: 0x8423659c  lh          $v1, 0x659C($at)
    ctx->pc = 0x2d8898u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E659Cu));
    // 0x2d889c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d88a0: 0x24a56598  addiu       $a1, $a1, 0x6598
    ctx->pc = 0x2d88a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26008));
    // 0x2d88a4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d88a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d88a8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d88a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d88ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d88acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d88b0: 0x8422659e  lh          $v0, 0x659E($at)
    ctx->pc = 0x2d88b0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E659Eu));
    // 0x2d88b4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d88b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d88b8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d88b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d88bc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d88bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d88c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d88c4: 0x842865a0  lh          $t0, 0x65A0($at)
    ctx->pc = 0x2d88c4u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E65A0u));
    // 0x2d88c8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d88c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d88cc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d88ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d88d0: 0x842965a2  lh          $t1, 0x65A2($at)
    ctx->pc = 0x2d88d0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E65A2u));
    // 0x2d88d4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d88d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d88d8: 0x8c2a6598  lw          $t2, 0x6598($at)
    ctx->pc = 0x2d88d8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E6598u));
    // 0x2d88dc: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D88DCu;
    SET_GPR_U32(ctx, 31, 0x2D88E4u);
    ctx->pc = 0x2D88E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D88DCu;
    // 0x2d88e0: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D88DCu, 0x2D88E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D88E4u;
label_2d88e4:
    // 0x2d88e4: 0x0  nop
    ctx->pc = 0x2d88e4u;
    // NOP
label_2d88e8:
    // 0x2d88e8: 0xc0b5204  jal         func_2D4810
    ctx->pc = 0x2D88E8u;
    SET_GPR_U32(ctx, 31, 0x2D88F0u);
    ctx->pc = 0x2D88ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D88E8u;
    // 0x2d88ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4810u, 0x2D88E8u, 0x2D88F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D88F0u;
label_2d88f0:
    // 0x2d88f0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2d88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d88f4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2d88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d88f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d88f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d88fc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2d88fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d8900: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d8900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d8904: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2d8904u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
label_2d8908:
    // 0x2d8908: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d8908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d890c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d890cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d8910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d891c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D891Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D891Cu;
        // 0x2d8920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D891Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8924u;
}
