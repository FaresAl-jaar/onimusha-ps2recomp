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

// Function: sub_003D8600
// Address: 0x3d8600 - 0x3d891c
void sub_003D8600_0x3d8600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8600_0x3d8600");
#endif

    switch (ctx->pc) {
        case 0x3d8618u: goto label_3d8618;
        case 0x3d8678u: goto label_3d8678;
        case 0x3d8688u: goto label_3d8688;
        case 0x3d8698u: goto label_3d8698;
        case 0x3d86a8u: goto label_3d86a8;
        case 0x3d86b8u: goto label_3d86b8;
        case 0x3d86d0u: goto label_3d86d0;
        case 0x3d8708u: goto label_3d8708;
        case 0x3d8750u: goto label_3d8750;
        case 0x3d8778u: goto label_3d8778;
        case 0x3d8788u: goto label_3d8788;
        case 0x3d8790u: goto label_3d8790;
        case 0x3d87b8u: goto label_3d87b8;
        case 0x3d87c0u: goto label_3d87c0;
        case 0x3d87c8u: goto label_3d87c8;
        case 0x3d87f0u: goto label_3d87f0;
        case 0x3d8810u: goto label_3d8810;
        case 0x3d8820u: goto label_3d8820;
        case 0x3d8840u: goto label_3d8840;
        case 0x3d8850u: goto label_3d8850;
        case 0x3d8858u: goto label_3d8858;
        case 0x3d8880u: goto label_3d8880;
        case 0x3d8888u: goto label_3d8888;
        case 0x3d8890u: goto label_3d8890;
        case 0x3d88b8u: goto label_3d88b8;
        case 0x3d88c8u: goto label_3d88c8;
        case 0x3d88e4u: goto label_3d88e4;
        default: break;
    }

    ctx->pc = 0x3d8600u;

    // 0x3d8600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d8600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d8604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d8604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d8608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d860c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d860cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8610: 0xc0f6280  jal         func_3D8A00
    ctx->pc = 0x3D8610u;
    SET_GPR_U32(ctx, 31, 0x3D8618u);
    ctx->pc = 0x3D8614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8610u;
    // 0x3d8614: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8A00u, 0x3D8610u, 0x3D8618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8618u;
label_3d8618:
    // 0x3d8618: 0xa2222bd9  sb          $v0, 0x2BD9($s1)
    ctx->pc = 0x3d8618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11225), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d861c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d8620: 0x92242bd8  lbu         $a0, 0x2BD8($s1)
    ctx->pc = 0x3d8620u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11224)));
    // 0x3d8624: 0x108300ac  beq         $a0, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x3D8624u;
    {
        const bool branch_taken_0x3d8624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8624u;
        // 0x3d8628: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8624) {
            ctx->pc = 0x3D88D8u;
            goto label_3d88d8;
        }
    }
    ctx->pc = 0x3D862Cu;
    // 0x3d862c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D862Cu;
    {
        const bool branch_taken_0x3d862c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d862c) {
            ctx->pc = 0x3D8680u;
            goto label_3d8680;
        }
    }
    ctx->pc = 0x3D8634u;
    // 0x3d8634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8638: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3D8638u;
    {
        const bool branch_taken_0x3d8638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d8638) {
            ctx->pc = 0x3D8670u;
            goto label_3d8670;
        }
    }
    ctx->pc = 0x3D8640u;
    // 0x3d8640: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8640u;
    {
        const bool branch_taken_0x3d8640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8640) {
            ctx->pc = 0x3D8650u;
            goto label_3d8650;
        }
    }
    ctx->pc = 0x3D8648u;
    // 0x3d8648: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x3D8648u;
    {
        const bool branch_taken_0x3d8648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8648) {
            ctx->pc = 0x3D8908u;
            goto label_3d8908;
        }
    }
    ctx->pc = 0x3D8650u;
label_3d8650:
    // 0x3d8650: 0xa6202bd4  sh          $zero, 0x2BD4($s1)
    ctx->pc = 0x3d8650u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11220), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8654: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3d8654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3d8658: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3d8658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d865c: 0xa6222bd6  sh          $v0, 0x2BD6($s1)
    ctx->pc = 0x3d865cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11222), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d8660: 0xa2202bdb  sb          $zero, 0x2BDB($s1)
    ctx->pc = 0x3d8660u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11227), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d8664: 0xa2202bda  sb          $zero, 0x2BDA($s1)
    ctx->pc = 0x3d8664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11226), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d8668: 0xa2232bd8  sb          $v1, 0x2BD8($s1)
    ctx->pc = 0x3d8668u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11224), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d866c: 0xae202bf4  sw          $zero, 0x2BF4($s1)
    ctx->pc = 0x3d866cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11252), GPR_U32(ctx, 0));
label_3d8670:
    // 0x3d8670: 0xc0f6250  jal         func_3D8940
    ctx->pc = 0x3D8670u;
    SET_GPR_U32(ctx, 31, 0x3D8678u);
    ctx->pc = 0x3D8674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8670u;
    // 0x3d8674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8940u, 0x3D8670u, 0x3D8678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8678u;
label_3d8678:
    // 0x3d8678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d8678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d867c: 0xa2222bd8  sb          $v0, 0x2BD8($s1)
    ctx->pc = 0x3d867cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11224), (uint8_t)GPR_U32(ctx, 2));
label_3d8680:
    // 0x3d8680: 0xc0f6278  jal         func_3D89E0
    ctx->pc = 0x3D8680u;
    SET_GPR_U32(ctx, 31, 0x3D8688u);
    ctx->pc = 0x3D8684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8680u;
    // 0x3d8684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D89E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D89E0u, 0x3D8680u, 0x3D8688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8688u;
label_3d8688:
    // 0x3d8688: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x3D8688u;
    {
        const bool branch_taken_0x3d8688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8688u;
        // 0x3d868c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8688) {
            ctx->pc = 0x3D88D0u;
            goto label_3d88d0;
        }
    }
    ctx->pc = 0x3D8690u;
    // 0x3d8690: 0xc0f62c8  jal         func_3D8B20
    ctx->pc = 0x3D8690u;
    SET_GPR_U32(ctx, 31, 0x3D8698u);
    ctx->pc = 0x3D8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B20u, 0x3D8690u, 0x3D8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8698u;
label_3d8698:
    // 0x3d8698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8698u;
    {
        const bool branch_taken_0x3d8698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8698u;
        // 0x3d869c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8698) {
            ctx->pc = 0x3D86B0u;
            goto label_3d86b0;
        }
    }
    ctx->pc = 0x3D86A0u;
    // 0x3d86a0: 0xc0f6370  jal         func_3D8DC0
    ctx->pc = 0x3D86A0u;
    SET_GPR_U32(ctx, 31, 0x3D86A8u);
    ctx->pc = 0x3D86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D86A0u;
    // 0x3d86a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DC0u, 0x3D86A0u, 0x3D86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D86A8u;
label_3d86a8:
    // 0x3d86a8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x3D86A8u;
    {
        const bool branch_taken_0x3d86a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d86a8) {
            ctx->pc = 0x3D8908u;
            goto label_3d8908;
        }
    }
    ctx->pc = 0x3D86B0u;
label_3d86b0:
    // 0x3d86b0: 0xc0f62bc  jal         func_3D8AF0
    ctx->pc = 0x3D86B0u;
    SET_GPR_U32(ctx, 31, 0x3D86B8u);
    ctx->pc = 0x3D86B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D86B0u;
    // 0x3d86b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8AF0u, 0x3D86B0u, 0x3D86B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D86B8u;
label_3d86b8:
    // 0x3d86b8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3D86B8u;
    {
        const bool branch_taken_0x3d86b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d86b8) {
            ctx->pc = 0x3D8828u;
            goto label_3d8828;
        }
    }
    ctx->pc = 0x3D86C0u;
    // 0x3d86c0: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3d86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3d86c4: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3d86c4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d86c8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3D86C8u;
    SET_GPR_U32(ctx, 31, 0x3D86D0u);
    ctx->pc = 0x3D86CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D86C8u;
    // 0x3d86cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3D86C8u, 0x3D86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D86D0u;
label_3d86d0:
    // 0x3d86d0: 0x92232bdb  lbu         $v1, 0x2BDB($s1)
    ctx->pc = 0x3d86d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11227)));
    // 0x3d86d4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3d86d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d86d8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3d86d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d86dc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D86DCu;
    {
        const bool branch_taken_0x3d86dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d86dc) {
            ctx->pc = 0x3D8720u;
            goto label_3d8720;
        }
    }
    ctx->pc = 0x3D86E4u;
    // 0x3d86e4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x3d86e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3d86e8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3d86e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3d86ec: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3d86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3d86f0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3d86f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3d86f4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D86F4u;
    {
        const bool branch_taken_0x3d86f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d86f4) {
            ctx->pc = 0x3D8760u;
            goto label_3d8760;
        }
    }
    ctx->pc = 0x3D86FCu;
    // 0x3d86fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d86fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8700: 0xc0f6370  jal         func_3D8DC0
    ctx->pc = 0x3D8700u;
    SET_GPR_U32(ctx, 31, 0x3D8708u);
    ctx->pc = 0x3D8704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8700u;
    // 0x3d8704: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DC0u, 0x3D8700u, 0x3D8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8708u;
label_3d8708:
    // 0x3d8708: 0xa6302bd6  sh          $s0, 0x2BD6($s1)
    ctx->pc = 0x3d8708u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11222), (uint16_t)GPR_U32(ctx, 16));
    // 0x3d870c: 0x92232bdb  lbu         $v1, 0x2BDB($s1)
    ctx->pc = 0x3d870cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11227)));
    // 0x3d8710: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3d8710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3d8714: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x3D8714u;
    {
        const bool branch_taken_0x3d8714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8714u;
        // 0x3d8718: 0xa2232bdb  sb          $v1, 0x2BDB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11227), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8714) {
            ctx->pc = 0x3D8908u;
            goto label_3d8908;
        }
    }
    ctx->pc = 0x3D871Cu;
    // 0x3d871c: 0x0  nop
    ctx->pc = 0x3d871cu;
    // NOP
label_3d8720:
    // 0x3d8720: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3d8720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3d8724: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D8724u;
    {
        const bool branch_taken_0x3d8724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8724u;
        // 0x3d8728: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8724) {
            ctx->pc = 0x3D8760u;
            goto label_3d8760;
        }
    }
    ctx->pc = 0x3D872Cu;
    // 0x3d872c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3d872cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3d8730: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x3d8730u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x3d8734: 0x96222bd6  lhu         $v0, 0x2BD6($s1)
    ctx->pc = 0x3d8734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11222)));
    // 0x3d8738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d8738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d873c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3d873cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3d8740: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8740u;
    {
        const bool branch_taken_0x3d8740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8740u;
        // 0x3d8744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8740) {
            ctx->pc = 0x3D8760u;
            goto label_3d8760;
        }
    }
    ctx->pc = 0x3D8748u;
    // 0x3d8748: 0xc0f6370  jal         func_3D8DC0
    ctx->pc = 0x3D8748u;
    SET_GPR_U32(ctx, 31, 0x3D8750u);
    ctx->pc = 0x3D874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8748u;
    // 0x3d874c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DC0u, 0x3D8748u, 0x3D8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8750u;
label_3d8750:
    // 0x3d8750: 0x92232bdb  lbu         $v1, 0x2BDB($s1)
    ctx->pc = 0x3d8750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11227)));
    // 0x3d8754: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3d8754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3d8758: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3D8758u;
    {
        const bool branch_taken_0x3d8758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8758u;
        // 0x3d875c: 0xa2232bdb  sb          $v1, 0x2BDB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11227), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8758) {
            ctx->pc = 0x3D8908u;
            goto label_3d8908;
        }
    }
    ctx->pc = 0x3D8760u;
label_3d8760:
    // 0x3d8760: 0x92232be0  lbu         $v1, 0x2BE0($s1)
    ctx->pc = 0x3d8760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11232)));
    // 0x3d8764: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3d8764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d8768: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D8768u;
    {
        const bool branch_taken_0x3d8768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8768u;
        // 0x3d876c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8768) {
            ctx->pc = 0x3D87B0u;
            goto label_3d87b0;
        }
    }
    ctx->pc = 0x3D8770u;
    // 0x3d8770: 0xc0f6248  jal         func_3D8920
    ctx->pc = 0x3D8770u;
    SET_GPR_U32(ctx, 31, 0x3D8778u);
    ctx->pc = 0x3D8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8920u, 0x3D8770u, 0x3D8778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8778u;
label_3d8778:
    // 0x3d8778: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8778u;
    {
        const bool branch_taken_0x3d8778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8778u;
        // 0x3d877c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8778) {
            ctx->pc = 0x3D8788u;
            goto label_3d8788;
        }
    }
    ctx->pc = 0x3D8780u;
    // 0x3d8780: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3D8780u;
    {
        const bool branch_taken_0x3d8780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8780) {
            ctx->pc = 0x3D87F8u;
            goto label_3d87f8;
        }
    }
    ctx->pc = 0x3D8788u;
label_3d8788:
    // 0x3d8788: 0xc0f62ec  jal         func_3D8BB0
    ctx->pc = 0x3D8788u;
    SET_GPR_U32(ctx, 31, 0x3D8790u);
    ctx->pc = 0x3D878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8788u;
    // 0x3d878c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8BB0u, 0x3D8788u, 0x3D8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8790u;
label_3d8790:
    // 0x3d8790: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3d8790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d8794: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3d8794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d8798: 0x0  nop
    ctx->pc = 0x3d8798u;
    // NOP
    // 0x3d879c: 0x10a2fffa  beq         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D879Cu;
    {
        const bool branch_taken_0x3d879c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d879c) {
            ctx->pc = 0x3D8788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8788;
        }
    }
    ctx->pc = 0x3D87A4u;
    // 0x3d87a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D87A4u;
    {
        const bool branch_taken_0x3d87a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d87a4) {
            ctx->pc = 0x3D87F8u;
            goto label_3d87f8;
        }
    }
    ctx->pc = 0x3D87ACu;
    // 0x3d87ac: 0x0  nop
    ctx->pc = 0x3d87acu;
    // NOP
label_3d87b0:
    // 0x3d87b0: 0xc0f6248  jal         func_3D8920
    ctx->pc = 0x3D87B0u;
    SET_GPR_U32(ctx, 31, 0x3D87B8u);
    ctx->pc = 0x3D87B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D87B0u;
    // 0x3d87b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8920u, 0x3D87B0u, 0x3D87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D87B8u;
label_3d87b8:
    // 0x3d87b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D87B8u;
    {
        const bool branch_taken_0x3d87b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d87b8) {
            ctx->pc = 0x3D87E8u;
            goto label_3d87e8;
        }
    }
    ctx->pc = 0x3D87C0u;
label_3d87c0:
    // 0x3d87c0: 0xc0f62ec  jal         func_3D8BB0
    ctx->pc = 0x3D87C0u;
    SET_GPR_U32(ctx, 31, 0x3D87C8u);
    ctx->pc = 0x3D87C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D87C0u;
    // 0x3d87c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8BB0u, 0x3D87C0u, 0x3D87C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D87C8u;
label_3d87c8:
    // 0x3d87c8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3d87c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d87cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3d87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d87d0: 0x0  nop
    ctx->pc = 0x3d87d0u;
    // NOP
    // 0x3d87d4: 0x10a2fffa  beq         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D87D4u;
    {
        const bool branch_taken_0x3d87d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d87d4) {
            ctx->pc = 0x3D87C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d87c0;
        }
    }
    ctx->pc = 0x3D87DCu;
    // 0x3d87dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D87DCu;
    {
        const bool branch_taken_0x3d87dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d87dc) {
            ctx->pc = 0x3D87F8u;
            goto label_3d87f8;
        }
    }
    ctx->pc = 0x3D87E4u;
    // 0x3d87e4: 0x0  nop
    ctx->pc = 0x3d87e4u;
    // NOP
label_3d87e8:
    // 0x3d87e8: 0xc0f62ec  jal         func_3D8BB0
    ctx->pc = 0x3D87E8u;
    SET_GPR_U32(ctx, 31, 0x3D87F0u);
    ctx->pc = 0x3D87ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D87E8u;
    // 0x3d87ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8BB0u, 0x3D87E8u, 0x3D87F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D87F0u;
label_3d87f0:
    // 0x3d87f0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3d87f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d87f4: 0x0  nop
    ctx->pc = 0x3d87f4u;
    // NOP
label_3d87f8:
    // 0x3d87f8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3d87f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3d87fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8800: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8800u;
    {
        const bool branch_taken_0x3d8800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8800u;
        // 0x3d8804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8800) {
            ctx->pc = 0x3D8818u;
            goto label_3d8818;
        }
    }
    ctx->pc = 0x3D8808u;
    // 0x3d8808: 0xc0f6338  jal         func_3D8CE0
    ctx->pc = 0x3D8808u;
    SET_GPR_U32(ctx, 31, 0x3D8810u);
    ctx->pc = 0x3D8CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8CE0u, 0x3D8808u, 0x3D8810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8810u;
label_3d8810:
    // 0x3d8810: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3d8810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d8814: 0x0  nop
    ctx->pc = 0x3d8814u;
    // NOP
label_3d8818:
    // 0x3d8818: 0xc0f6370  jal         func_3D8DC0
    ctx->pc = 0x3D8818u;
    SET_GPR_U32(ctx, 31, 0x3D8820u);
    ctx->pc = 0x3D881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8818u;
    // 0x3d881c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DC0u, 0x3D8818u, 0x3D8820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8820u;
label_3d8820:
    // 0x3d8820: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3D8820u;
    {
        const bool branch_taken_0x3d8820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8820) {
            ctx->pc = 0x3D8908u;
            goto label_3d8908;
        }
    }
    ctx->pc = 0x3D8828u;
label_3d8828:
    // 0x3d8828: 0x92232be0  lbu         $v1, 0x2BE0($s1)
    ctx->pc = 0x3d8828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11232)));
    // 0x3d882c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3d882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d8830: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D8830u;
    {
        const bool branch_taken_0x3d8830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8830u;
        // 0x3d8834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8830) {
            ctx->pc = 0x3D8878u;
            goto label_3d8878;
        }
    }
    ctx->pc = 0x3D8838u;
    // 0x3d8838: 0xc0f6248  jal         func_3D8920
    ctx->pc = 0x3D8838u;
    SET_GPR_U32(ctx, 31, 0x3D8840u);
    ctx->pc = 0x3D8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8920u, 0x3D8838u, 0x3D8840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8840u;
label_3d8840:
    // 0x3d8840: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8840u;
    {
        const bool branch_taken_0x3d8840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8840u;
        // 0x3d8844: 0x64050009  daddiu      $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8840) {
            ctx->pc = 0x3D8850u;
            goto label_3d8850;
        }
    }
    ctx->pc = 0x3D8848u;
    // 0x3d8848: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3D8848u;
    {
        const bool branch_taken_0x3d8848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8848) {
            ctx->pc = 0x3D88C0u;
            goto label_3d88c0;
        }
    }
    ctx->pc = 0x3D8850u;
label_3d8850:
    // 0x3d8850: 0xc0f6320  jal         func_3D8C80
    ctx->pc = 0x3D8850u;
    SET_GPR_U32(ctx, 31, 0x3D8858u);
    ctx->pc = 0x3D8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8850u;
    // 0x3d8854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8C80u, 0x3D8850u, 0x3D8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8858u;
label_3d8858:
    // 0x3d8858: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3d8858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d885c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3d885cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d8860: 0x0  nop
    ctx->pc = 0x3d8860u;
    // NOP
    // 0x3d8864: 0x10a2fffa  beq         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D8864u;
    {
        const bool branch_taken_0x3d8864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8864) {
            ctx->pc = 0x3D8850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8850;
        }
    }
    ctx->pc = 0x3D886Cu;
    // 0x3d886c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D886Cu;
    {
        const bool branch_taken_0x3d886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d886c) {
            ctx->pc = 0x3D88C0u;
            goto label_3d88c0;
        }
    }
    ctx->pc = 0x3D8874u;
    // 0x3d8874: 0x0  nop
    ctx->pc = 0x3d8874u;
    // NOP
label_3d8878:
    // 0x3d8878: 0xc0f6248  jal         func_3D8920
    ctx->pc = 0x3D8878u;
    SET_GPR_U32(ctx, 31, 0x3D8880u);
    ctx->pc = 0x3D887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8878u;
    // 0x3d887c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8920u, 0x3D8878u, 0x3D8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8880u;
label_3d8880:
    // 0x3d8880: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D8880u;
    {
        const bool branch_taken_0x3d8880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8880) {
            ctx->pc = 0x3D88B0u;
            goto label_3d88b0;
        }
    }
    ctx->pc = 0x3D8888u;
label_3d8888:
    // 0x3d8888: 0xc0f6320  jal         func_3D8C80
    ctx->pc = 0x3D8888u;
    SET_GPR_U32(ctx, 31, 0x3D8890u);
    ctx->pc = 0x3D888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8888u;
    // 0x3d888c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8C80u, 0x3D8888u, 0x3D8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8890u;
label_3d8890:
    // 0x3d8890: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3d8890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d8894: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3d8894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d8898: 0x0  nop
    ctx->pc = 0x3d8898u;
    // NOP
    // 0x3d889c: 0x10a2fffa  beq         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D889Cu;
    {
        const bool branch_taken_0x3d889c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d889c) {
            ctx->pc = 0x3D8888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8888;
        }
    }
    ctx->pc = 0x3D88A4u;
    // 0x3d88a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D88A4u;
    {
        const bool branch_taken_0x3d88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d88a4) {
            ctx->pc = 0x3D88C0u;
            goto label_3d88c0;
        }
    }
    ctx->pc = 0x3D88ACu;
    // 0x3d88ac: 0x0  nop
    ctx->pc = 0x3d88acu;
    // NOP
label_3d88b0:
    // 0x3d88b0: 0xc0f6320  jal         func_3D8C80
    ctx->pc = 0x3D88B0u;
    SET_GPR_U32(ctx, 31, 0x3D88B8u);
    ctx->pc = 0x3D88B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D88B0u;
    // 0x3d88b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8C80u, 0x3D88B0u, 0x3D88B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D88B8u;
label_3d88b8:
    // 0x3d88b8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3d88b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d88bc: 0x0  nop
    ctx->pc = 0x3d88bcu;
    // NOP
label_3d88c0:
    // 0x3d88c0: 0xc0f6370  jal         func_3D8DC0
    ctx->pc = 0x3D88C0u;
    SET_GPR_U32(ctx, 31, 0x3D88C8u);
    ctx->pc = 0x3D88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D88C0u;
    // 0x3d88c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DC0u, 0x3D88C0u, 0x3D88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D88C8u;
label_3d88c8:
    // 0x3d88c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D88C8u;
    {
        const bool branch_taken_0x3d88c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d88c8) {
            ctx->pc = 0x3D8908u;
            goto label_3d8908;
        }
    }
    ctx->pc = 0x3D88D0u;
label_3d88d0:
    // 0x3d88d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d88d4: 0xa2222bd8  sb          $v0, 0x2BD8($s1)
    ctx->pc = 0x3d88d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11224), (uint8_t)GPR_U32(ctx, 2));
label_3d88d8:
    // 0x3d88d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d88d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d88dc: 0xc0f6370  jal         func_3D8DC0
    ctx->pc = 0x3D88DCu;
    SET_GPR_U32(ctx, 31, 0x3D88E4u);
    ctx->pc = 0x3D88E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D88DCu;
    // 0x3d88e0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DC0u, 0x3D88DCu, 0x3D88E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D88E4u;
label_3d88e4:
    // 0x3d88e4: 0x92232bda  lbu         $v1, 0x2BDA($s1)
    ctx->pc = 0x3d88e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11226)));
    // 0x3d88e8: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x3d88e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d88ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D88ECu;
    {
        const bool branch_taken_0x3d88ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d88ec) {
            ctx->pc = 0x3D8900u;
            goto label_3d8900;
        }
    }
    ctx->pc = 0x3D88F4u;
    // 0x3d88f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d88f8: 0xa2232bda  sb          $v1, 0x2BDA($s1)
    ctx->pc = 0x3d88f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11226), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d88fc: 0x0  nop
    ctx->pc = 0x3d88fcu;
    // NOP
label_3d8900:
    // 0x3d8900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d8900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8904: 0xa2232bd8  sb          $v1, 0x2BD8($s1)
    ctx->pc = 0x3d8904u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11224), (uint8_t)GPR_U32(ctx, 3));
label_3d8908:
    // 0x3d8908: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d8908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d890c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d890cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8914: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8914u;
        // 0x3d8918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D891Cu;
}
