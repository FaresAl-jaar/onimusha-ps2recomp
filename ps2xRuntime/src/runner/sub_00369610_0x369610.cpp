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

// Function: sub_00369610
// Address: 0x369610 - 0x369788
void sub_00369610_0x369610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369610_0x369610");
#endif

    switch (ctx->pc) {
        case 0x369684u: goto label_369684;
        case 0x3696a0u: goto label_3696a0;
        case 0x3696b4u: goto label_3696b4;
        case 0x3696c4u: goto label_3696c4;
        case 0x3696e4u: goto label_3696e4;
        case 0x369708u: goto label_369708;
        default: break;
    }

    ctx->pc = 0x369610u;

    // 0x369610: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x369610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x369614: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x369614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x369618: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x369618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x36961c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x36961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x369620: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x369620u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369624: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x369624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x369628: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x369628u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36962c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x369630: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x369630u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369634: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x369634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x369638: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x369638u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36963c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x369640: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x369640u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369644: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x369644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x369648: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x369648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36964c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369650: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x369650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369658: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x369658u;
    {
        const bool branch_taken_0x369658 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x36965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369658u;
        // 0x36965c: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369658) {
            ctx->pc = 0x369668u;
            goto label_369668;
        }
    }
    ctx->pc = 0x369660u;
    // 0x369660: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x369660u;
    {
        const bool branch_taken_0x369660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369660u;
        // 0x369664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369660) {
            ctx->pc = 0x369758u;
            goto label_369758;
        }
    }
    ctx->pc = 0x369668u;
label_369668:
    // 0x369668: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x369668u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x36966c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x369674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369678: 0x24070590  addiu       $a3, $zero, 0x590
    ctx->pc = 0x369678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x36967c: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x36967Cu;
    SET_GPR_U32(ctx, 31, 0x369684u);
    ctx->pc = 0x369680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36967Cu;
    // 0x369680: 0x250895a0  addiu       $t0, $t0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x36967Cu, 0x369684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369684u;
label_369684:
    // 0x369684: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x369684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369688: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x369688u;
    {
        const bool branch_taken_0x369688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369688u;
        // 0x36968c: 0x324700ff  andi        $a3, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x369688) {
            ctx->pc = 0x369750u;
            goto label_369750;
        }
    }
    ctx->pc = 0x369690u;
    // 0x369690: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x369694: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x369694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369698: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x369698u;
    SET_GPR_U32(ctx, 31, 0x3696A0u);
    ctx->pc = 0x36969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369698u;
    // 0x36969c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x369698u, 0x3696A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3696A0u;
label_3696a0:
    // 0x3696a0: 0x326700ff  andi        $a3, $s3, 0xFF
    ctx->pc = 0x3696a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x3696a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3696a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3696a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3696a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696ac: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x3696ACu;
    SET_GPR_U32(ctx, 31, 0x3696B4u);
    ctx->pc = 0x3696B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3696ACu;
    // 0x3696b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x3696ACu, 0x3696B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3696B4u;
label_3696b4:
    // 0x3696b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3696b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3696b8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3696b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3696bc: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3696BCu;
    SET_GPR_U32(ctx, 31, 0x3696C4u);
    ctx->pc = 0x3696C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3696BCu;
    // 0x3696c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3696BCu, 0x3696C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3696C4u;
label_3696c4:
    // 0x3696c4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3696c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696c8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3696c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696cc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3696ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3696d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696d4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3696d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3696d8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x3696d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3696dc: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3696DCu;
    SET_GPR_U32(ctx, 31, 0x3696E4u);
    ctx->pc = 0x3696E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3696DCu;
    // 0x3696e0: 0x27aa00a0  addiu       $t2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3696DCu, 0x3696E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3696E4u;
label_3696e4:
    // 0x3696e4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3696e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3696e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3696e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3696ec: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3696ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3696f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3696f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696f4: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3696f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3696f8: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3696f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3696fc: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3696fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x369700: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x369700u;
    SET_GPR_U32(ctx, 31, 0x369708u);
    ctx->pc = 0x369704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369700u;
    // 0x369704: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x369700u, 0x369708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369708u;
label_369708:
    // 0x369708: 0xae000574  sw          $zero, 0x574($s0)
    ctx->pc = 0x369708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 0));
    // 0x36970c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x369710: 0xae000578  sw          $zero, 0x578($s0)
    ctx->pc = 0x369710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1400), GPR_U32(ctx, 0));
    // 0x369714: 0xae02057c  sw          $v0, 0x57C($s0)
    ctx->pc = 0x369714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 2));
    // 0x369718: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x369718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x36971c: 0xa2020580  sb          $v0, 0x580($s0)
    ctx->pc = 0x36971cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1408), (uint8_t)GPR_U32(ctx, 2));
    // 0x369720: 0x93a200f8  lbu         $v0, 0xF8($sp)
    ctx->pc = 0x369720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x369724: 0xa2020581  sb          $v0, 0x581($s0)
    ctx->pc = 0x369724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1409), (uint8_t)GPR_U32(ctx, 2));
    // 0x369728: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x369728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x36972c: 0xae020570  sw          $v0, 0x570($s0)
    ctx->pc = 0x36972cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 2));
    // 0x369730: 0xa2130582  sb          $s3, 0x582($s0)
    ctx->pc = 0x369730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1410), (uint8_t)GPR_U32(ctx, 19));
    // 0x369734: 0xa2120583  sb          $s2, 0x583($s0)
    ctx->pc = 0x369734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1411), (uint8_t)GPR_U32(ctx, 18));
    // 0x369738: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x369738u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36973c: 0x7e020550  sq          $v0, 0x550($s0)
    ctx->pc = 0x36973cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
    // 0x369740: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x369740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x369744: 0x7e020560  sq          $v0, 0x560($s0)
    ctx->pc = 0x369744u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1376), GPR_VEC(ctx, 2));
    // 0x369748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x369748u;
    {
        const bool branch_taken_0x369748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369748u;
        // 0x36974c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369748) {
            ctx->pc = 0x369758u;
            goto label_369758;
        }
    }
    ctx->pc = 0x369750u;
label_369750:
    // 0x369750: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x369750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369754: 0x0  nop
    ctx->pc = 0x369754u;
    // NOP
label_369758:
    // 0x369758: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x369758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36975c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x36975cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x369760: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x369760u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x369764: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x369764u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x369768: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x369768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36976c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36976cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369770: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x369770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369774: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x369774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36977c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36977cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369780: 0x3e00008  jr          $ra
    ctx->pc = 0x369780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369780u;
        // 0x369784: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369788u;
}
