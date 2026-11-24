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

// Function: sub_003CA3C0
// Address: 0x3ca3c0 - 0x3ca5c4
void sub_003CA3C0_0x3ca3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA3C0_0x3ca3c0");
#endif

    switch (ctx->pc) {
        case 0x3ca3e0u: goto label_3ca3e0;
        case 0x3ca440u: goto label_3ca440;
        case 0x3ca558u: goto label_3ca558;
        case 0x3ca570u: goto label_3ca570;
        case 0x3ca5a4u: goto label_3ca5a4;
        default: break;
    }

    ctx->pc = 0x3ca3c0u;

    // 0x3ca3c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ca3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ca3c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ca3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ca3c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ca3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ca3cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ca3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ca3d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ca3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ca3d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca3d8: 0xc0a60b8  jal         func_2982E0
    ctx->pc = 0x3CA3D8u;
    SET_GPR_U32(ctx, 31, 0x3CA3E0u);
    ctx->pc = 0x3CA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA3D8u;
    // 0x3ca3dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982E0u, 0x3CA3D8u, 0x3CA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA3E0u;
label_3ca3e0:
    // 0x3ca3e0: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x3ca3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x3ca3e4: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x3CA3E4u;
    {
        const bool branch_taken_0x3ca3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca3e4) {
            ctx->pc = 0x3CA5A8u;
            goto label_3ca5a8;
        }
    }
    ctx->pc = 0x3CA3ECu;
    // 0x3ca3ec: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x3ca3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3ca3f0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3ca3f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ca3f4: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x3CA3F4u;
    {
        const bool branch_taken_0x3ca3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca3f4) {
            ctx->pc = 0x3CA5A8u;
            goto label_3ca5a8;
        }
    }
    ctx->pc = 0x3CA3FCu;
    // 0x3ca3fc: 0xfe200128  sd          $zero, 0x128($s1)
    ctx->pc = 0x3ca3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 296), GPR_U64(ctx, 0));
    // 0x3ca400: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x3ca400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x3ca404: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3ca404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3ca408: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x3CA408u;
    {
        const bool branch_taken_0x3ca408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca408) {
            ctx->pc = 0x3CA5A8u;
            goto label_3ca5a8;
        }
    }
    ctx->pc = 0x3CA410u;
    // 0x3ca410: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x3ca410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3ca414: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3ca414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ca418: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x3CA418u;
    {
        const bool branch_taken_0x3ca418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca418) {
            ctx->pc = 0x3CA5A8u;
            goto label_3ca5a8;
        }
    }
    ctx->pc = 0x3CA420u;
    // 0x3ca420: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x3ca420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x3ca424: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x3CA424u;
    {
        const bool branch_taken_0x3ca424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA424u;
        // 0x3ca428: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca424) {
            ctx->pc = 0x3CA550u;
            goto label_3ca550;
        }
    }
    ctx->pc = 0x3CA42Cu;
    // 0x3ca42c: 0x3c07008c  lui         $a3, 0x8C
    ctx->pc = 0x3ca42cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)140 << 16));
    // 0x3ca430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ca430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca434: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3ca434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ca438: 0x24e731a0  addiu       $a3, $a3, 0x31A0
    ctx->pc = 0x3ca438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12704));
    // 0x3ca43c: 0x0  nop
    ctx->pc = 0x3ca43cu;
    // NOP
label_3ca440:
    // 0x3ca440: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x3ca440u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ca444: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x3ca444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3ca448: 0x14c0003d  bnez        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x3CA448u;
    {
        const bool branch_taken_0x3ca448 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca448) {
            ctx->pc = 0x3CA540u;
            goto label_3ca540;
        }
    }
    ctx->pc = 0x3CA450u;
    // 0x3ca450: 0x90680003  lbu         $t0, 0x3($v1)
    ctx->pc = 0x3ca450u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x3ca454: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x3ca454u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3ca458: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3ca458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3ca45c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3ca45cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3ca460: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x3ca460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3ca464: 0x91060005  lbu         $a2, 0x5($t0)
    ctx->pc = 0x3ca464u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x3ca468: 0x14c00035  bnez        $a2, . + 4 + (0x35 << 2)
    ctx->pc = 0x3CA468u;
    {
        const bool branch_taken_0x3ca468 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca468) {
            ctx->pc = 0x3CA540u;
            goto label_3ca540;
        }
    }
    ctx->pc = 0x3CA470u;
    // 0x3ca470: 0x91060004  lbu         $a2, 0x4($t0)
    ctx->pc = 0x3ca470u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3ca474: 0x14c50016  bne         $a2, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3CA474u;
    {
        const bool branch_taken_0x3ca474 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ca474) {
            ctx->pc = 0x3CA4D0u;
            goto label_3ca4d0;
        }
    }
    ctx->pc = 0x3CA47Cu;
    // 0x3ca47c: 0x9627020c  lhu         $a3, 0x20C($s1)
    ctx->pc = 0x3ca47cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x3ca480: 0x2404015c  addiu       $a0, $zero, 0x15C
    ctx->pc = 0x3ca480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x3ca484: 0x96262b20  lhu         $a2, 0x2B20($s1)
    ctx->pc = 0x3ca484u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11040)));
    // 0x3ca488: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x3ca488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x3ca48c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3ca48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3ca490: 0x24a50958  addiu       $a1, $a1, 0x958
    ctx->pc = 0x3ca490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2392));
    // 0x3ca494: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3ca494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3ca498: 0xa6262b20  sh          $a2, 0x2B20($s1)
    ctx->pc = 0x3ca498u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11040), (uint16_t)GPR_U32(ctx, 6));
    // 0x3ca49c: 0x8e2729c4  lw          $a3, 0x29C4($s1)
    ctx->pc = 0x3ca49cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10692)));
    // 0x3ca4a0: 0x8e2629c0  lw          $a2, 0x29C0($s1)
    ctx->pc = 0x3ca4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3ca4a4: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x3ca4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x3ca4a8: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x3ca4a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3ca4ac: 0xde230128  ld          $v1, 0x128($s1)
    ctx->pc = 0x3ca4acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x3ca4b0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x3ca4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3ca4b4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3ca4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3ca4b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3ca4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3ca4bc: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x3ca4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3ca4c0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3ca4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3ca4c4: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x3ca4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ca4c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3CA4C8u;
    {
        const bool branch_taken_0x3ca4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4C8u;
        // 0x3ca4cc: 0xfe230128  sd          $v1, 0x128($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 296), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca4c8) {
            ctx->pc = 0x3CA550u;
            goto label_3ca550;
        }
    }
    ctx->pc = 0x3CA4D0u;
label_3ca4d0:
    // 0x3ca4d0: 0x14c40019  bne         $a2, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3CA4D0u;
    {
        const bool branch_taken_0x3ca4d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ca4d0) {
            ctx->pc = 0x3CA538u;
            goto label_3ca538;
        }
    }
    ctx->pc = 0x3CA4D8u;
    // 0x3ca4d8: 0x9628020c  lhu         $t0, 0x20C($s1)
    ctx->pc = 0x3ca4d8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x3ca4dc: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x3ca4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3ca4e0: 0x96272b22  lhu         $a3, 0x2B22($s1)
    ctx->pc = 0x3ca4e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11042)));
    // 0x3ca4e4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3ca4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3ca4e8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x3ca4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x3ca4ec: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x3ca4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
    // 0x3ca4f0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3ca4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3ca4f4: 0x24c60958  addiu       $a2, $a2, 0x958
    ctx->pc = 0x3ca4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2392));
    // 0x3ca4f8: 0xe82821  addu        $a1, $a3, $t0
    ctx->pc = 0x3ca4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3ca4fc: 0xa6252b22  sh          $a1, 0x2B22($s1)
    ctx->pc = 0x3ca4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11042), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ca500: 0x8e2729c4  lw          $a3, 0x29C4($s1)
    ctx->pc = 0x3ca500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10692)));
    // 0x3ca504: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x3ca504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3ca508: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x3ca508u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x3ca50c: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x3ca50cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3ca510: 0xde230128  ld          $v1, 0x128($s1)
    ctx->pc = 0x3ca510u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x3ca514: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x3ca514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3ca518: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3ca518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3ca51c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3ca51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3ca520: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x3ca520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3ca524: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3ca524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3ca528: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x3ca528u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ca52c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CA52Cu;
    {
        const bool branch_taken_0x3ca52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA52Cu;
        // 0x3ca530: 0xfe230128  sd          $v1, 0x128($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 296), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca52c) {
            ctx->pc = 0x3CA550u;
            goto label_3ca550;
        }
    }
    ctx->pc = 0x3CA534u;
    // 0x3ca534: 0x0  nop
    ctx->pc = 0x3ca534u;
    // NOP
label_3ca538:
    // 0x3ca538: 0xfe200128  sd          $zero, 0x128($s1)
    ctx->pc = 0x3ca538u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 296), GPR_U64(ctx, 0));
    // 0x3ca53c: 0x0  nop
    ctx->pc = 0x3ca53cu;
    // NOP
label_3ca540:
    // 0x3ca540: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3ca540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3ca544: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x3CA544u;
    {
        const bool branch_taken_0x3ca544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca544) {
            ctx->pc = 0x3CA440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca440;
        }
    }
    ctx->pc = 0x3CA54Cu;
    // 0x3ca54c: 0x0  nop
    ctx->pc = 0x3ca54cu;
    // NOP
label_3ca550:
    // 0x3ca550: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ca550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca554: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3ca554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca558:
    // 0x3ca558: 0x96432b20  lhu         $v1, 0x2B20($s2)
    ctx->pc = 0x3ca558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x3ca55c: 0x286105dd  slti        $at, $v1, 0x5DD
    ctx->pc = 0x3ca55cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1501) ? 1 : 0);
    // 0x3ca560: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA560u;
    {
        const bool branch_taken_0x3ca560 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA560u;
        // 0x3ca564: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca560) {
            ctx->pc = 0x3CA570u;
            goto label_3ca570;
        }
    }
    ctx->pc = 0x3CA568u;
    // 0x3ca568: 0xc0f2838  jal         func_3CA0E0
    ctx->pc = 0x3CA568u;
    SET_GPR_U32(ctx, 31, 0x3CA570u);
    ctx->pc = 0x3CA56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA568u;
    // 0x3ca56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA0E0u, 0x3CA568u, 0x3CA570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA570u;
label_3ca570:
    // 0x3ca570: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ca570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ca574: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x3ca574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ca578: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3CA578u;
    {
        const bool branch_taken_0x3ca578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA578u;
        // 0x3ca57c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca578) {
            ctx->pc = 0x3CA558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca558;
        }
    }
    ctx->pc = 0x3CA580u;
    // 0x3ca580: 0x92242b24  lbu         $a0, 0x2B24($s1)
    ctx->pc = 0x3ca580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11044)));
    // 0x3ca584: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ca584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ca588: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CA588u;
    {
        const bool branch_taken_0x3ca588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA588u;
        // 0x3ca58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca588) {
            ctx->pc = 0x3CA5A8u;
            goto label_3ca5a8;
        }
    }
    ctx->pc = 0x3CA590u;
    // 0x3ca590: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ca590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca594: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3ca594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ca598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ca598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca59c: 0xc09fcf4  jal         func_27F3D0
    ctx->pc = 0x3CA59Cu;
    SET_GPR_U32(ctx, 31, 0x3CA5A4u);
    ctx->pc = 0x3CA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA59Cu;
    // 0x3ca5a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x3CA59Cu, 0x3CA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA5A4u;
label_3ca5a4:
    // 0x3ca5a4: 0x0  nop
    ctx->pc = 0x3ca5a4u;
    // NOP
label_3ca5a8:
    // 0x3ca5a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ca5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ca5ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ca5acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ca5b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ca5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca5b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ca5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5BCu;
        // 0x3ca5c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA5C4u;
}
