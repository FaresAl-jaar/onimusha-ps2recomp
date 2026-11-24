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

// Function: sub_003AB860
// Address: 0x3ab860 - 0x3ab9ec
void sub_003AB860_0x3ab860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB860_0x3ab860");
#endif

    switch (ctx->pc) {
        case 0x3ab8acu: goto label_3ab8ac;
        case 0x3ab8ecu: goto label_3ab8ec;
        case 0x3ab944u: goto label_3ab944;
        case 0x3ab9a0u: goto label_3ab9a0;
        case 0x3ab9b4u: goto label_3ab9b4;
        case 0x3ab9d0u: goto label_3ab9d0;
        default: break;
    }

    ctx->pc = 0x3ab860u;

    // 0x3ab860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ab860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ab864: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x3ab864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x3ab868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ab868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ab86c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3ab86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3ab870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ab870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ab874: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3ab874u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x3ab878: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ab878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ab87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ab880: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3ab880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3ab884: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x3ab884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
    // 0x3ab888: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ab888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ab88c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3ab88cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3ab890: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3ab890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ab894: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3ab894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ab898: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x3AB898u;
    {
        const bool branch_taken_0x3ab898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB898u;
        // 0x3ab89c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab898) {
            ctx->pc = 0x3AB9D8u;
            goto label_3ab9d8;
        }
    }
    ctx->pc = 0x3AB8A0u;
    // 0x3ab8a0: 0x90226c10  lbu         $v0, 0x6C10($at)
    ctx->pc = 0x3ab8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27664)));
    // 0x3ab8a4: 0xc0f5718  jal         func_3D5C60
    ctx->pc = 0x3AB8A4u;
    SET_GPR_U32(ctx, 31, 0x3AB8ACu);
    ctx->pc = 0x3AB8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8A4u;
    // 0x3ab8a8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5C60u, 0x3AB8A4u, 0x3AB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB8ACu;
label_3ab8ac:
    // 0x3ab8ac: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3ab8acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ab8b0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3ab8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3ab8b4: 0x8c230fc0  lw          $v1, 0xFC0($at)
    ctx->pc = 0x3ab8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x810FC0u));
    // 0x3ab8b8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3ab8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ab8bc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3ab8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3ab8c0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3ab8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3ab8c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3ab8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3ab8c8: 0x8c23c0f0  lw          $v1, -0x3F10($at)
    ctx->pc = 0x3ab8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x91C0F0u));
    // 0x3ab8cc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3ab8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x3ab8d0: 0x96230044  lhu         $v1, 0x44($s1)
    ctx->pc = 0x3ab8d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x3ab8d4: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x3ab8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ab8d8: 0x9223005a  lbu         $v1, 0x5A($s1)
    ctx->pc = 0x3ab8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x3ab8dc: 0xa2030014  sb          $v1, 0x14($s0)
    ctx->pc = 0x3ab8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ab8e0: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x3ab8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab8e4: 0xc0d8c2c  jal         func_3630B0
    ctx->pc = 0x3AB8E4u;
    SET_GPR_U32(ctx, 31, 0x3AB8ECu);
    ctx->pc = 0x3AB8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8E4u;
    // 0x3ab8e8: 0xa2020011  sb          $v0, 0x11($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3630B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3630B0u, 0x3AB8E4u, 0x3AB8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB8ECu;
label_3ab8ec:
    // 0x3ab8ec: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x3ab8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab8f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3ab8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3ab8f4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3ab8f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3ab8f8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3ab8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3ab8fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ab8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ab900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ab900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ab904: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3ab904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ab908: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3AB908u;
    {
        const bool branch_taken_0x3ab908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab908) {
            ctx->pc = 0x3AB948u;
            goto label_3ab948;
        }
    }
    ctx->pc = 0x3AB910u;
    // 0x3ab910: 0x90a229d0  lbu         $v0, 0x29D0($a1)
    ctx->pc = 0x3ab910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10704)));
    // 0x3ab914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ab914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab91c: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x3ab91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab920: 0x92070011  lbu         $a3, 0x11($s0)
    ctx->pc = 0x3ab920u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3ab924: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x3ab924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x3ab928: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x3ab928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ab92c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ab92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ab930: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ab930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ab934: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x3ab934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab938: 0x92070011  lbu         $a3, 0x11($s0)
    ctx->pc = 0x3ab938u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3ab93c: 0xc0eae7c  jal         func_3AB9F0
    ctx->pc = 0x3AB93Cu;
    SET_GPR_U32(ctx, 31, 0x3AB944u);
    ctx->pc = 0x3AB940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB93Cu;
    // 0x3ab940: 0x26060016  addiu       $a2, $s0, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB9F0u, 0x3AB93Cu, 0x3AB944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB944u;
label_3ab944:
    // 0x3ab944: 0x0  nop
    ctx->pc = 0x3ab944u;
    // NOP
label_3ab948:
    // 0x3ab948: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3ab948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3ab94c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3ab94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3ab950: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3ab950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3ab954: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3ab954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3ab958: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ab958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ab95c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ab95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ab960: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3ab960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ab964: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3AB964u;
    {
        const bool branch_taken_0x3ab964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab964) {
            ctx->pc = 0x3AB9A0u;
            goto label_3ab9a0;
        }
    }
    ctx->pc = 0x3AB96Cu;
    // 0x3ab96c: 0x90a229d0  lbu         $v0, 0x29D0($a1)
    ctx->pc = 0x3ab96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10704)));
    // 0x3ab970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ab970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab978: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x3ab978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab97c: 0x92070012  lbu         $a3, 0x12($s0)
    ctx->pc = 0x3ab97cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3ab980: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x3ab980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x3ab984: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x3ab984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ab988: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ab988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ab98c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ab98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ab990: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x3ab990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab994: 0x92070012  lbu         $a3, 0x12($s0)
    ctx->pc = 0x3ab994u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3ab998: 0xc0eae7c  jal         func_3AB9F0
    ctx->pc = 0x3AB998u;
    SET_GPR_U32(ctx, 31, 0x3AB9A0u);
    ctx->pc = 0x3AB99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB998u;
    // 0x3ab99c: 0x2606002c  addiu       $a2, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB9F0u, 0x3AB998u, 0x3AB9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9A0u;
label_3ab9a0:
    // 0x3ab9a0: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3ab9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3ab9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab9a8: 0x24a59a70  addiu       $a1, $a1, -0x6590
    ctx->pc = 0x3ab9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    // 0x3ab9ac: 0xc0eb0c4  jal         func_3AC310
    ctx->pc = 0x3AB9ACu;
    SET_GPR_U32(ctx, 31, 0x3AB9B4u);
    ctx->pc = 0x3AB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9ACu;
    // 0x3ab9b0: 0x24060330  addiu       $a2, $zero, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC310u, 0x3AB9ACu, 0x3AB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9B4u;
label_3ab9b4:
    // 0x3ab9b4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab9b8: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3ab9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3ab9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab9c0: 0xac229d98  sw          $v0, -0x6268($at)
    ctx->pc = 0x3ab9c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x929D98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x929D98u, _value); } while (0);
    // 0x3ab9c4: 0x24a59a70  addiu       $a1, $a1, -0x6590
    ctx->pc = 0x3ab9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    // 0x3ab9c8: 0xc0eb0f4  jal         func_3AC3D0
    ctx->pc = 0x3AB9C8u;
    SET_GPR_U32(ctx, 31, 0x3AB9D0u);
    ctx->pc = 0x3AB9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9C8u;
    // 0x3ab9cc: 0x24060330  addiu       $a2, $zero, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC3D0u, 0x3AB9C8u, 0x3AB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9D0u;
label_3ab9d0:
    // 0x3ab9d0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab9d4: 0xac229d9c  sw          $v0, -0x6264($at)
    ctx->pc = 0x3ab9d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x929D9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x929D9Cu, _value); } while (0);
label_3ab9d8:
    // 0x3ab9d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ab9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ab9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ab9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ab9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9E4u;
        // 0x3ab9e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB9ECu;
}
