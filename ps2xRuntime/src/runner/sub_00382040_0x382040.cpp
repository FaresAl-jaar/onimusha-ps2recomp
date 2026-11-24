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

// Function: sub_00382040
// Address: 0x382040 - 0x382390
void sub_00382040_0x382040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382040_0x382040");
#endif

    switch (ctx->pc) {
        case 0x3820dcu: goto label_3820dc;
        case 0x3820fcu: goto label_3820fc;
        case 0x38211cu: goto label_38211c;
        case 0x38213cu: goto label_38213c;
        case 0x38215cu: goto label_38215c;
        case 0x38217cu: goto label_38217c;
        case 0x38219cu: goto label_38219c;
        case 0x3821d4u: goto label_3821d4;
        case 0x3821e8u: goto label_3821e8;
        case 0x382228u: goto label_382228;
        case 0x382238u: goto label_382238;
        case 0x3822d4u: goto label_3822d4;
        case 0x382380u: goto label_382380;
        default: break;
    }

    ctx->pc = 0x382040u;

    // 0x382040: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x382040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x382044: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x382044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x382048: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38204c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x382050: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x382050u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x382054: 0x10c30070  beq         $a2, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x382054u;
    {
        const bool branch_taken_0x382054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x382058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382054u;
        // 0x382058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382054) {
            ctx->pc = 0x382218u;
            goto label_382218;
        }
    }
    ctx->pc = 0x38205Cu;
    // 0x38205c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x382060: 0x10c30065  beq         $a2, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x382060u;
    {
        const bool branch_taken_0x382060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x382060) {
            ctx->pc = 0x3821F8u;
            goto label_3821f8;
        }
    }
    ctx->pc = 0x382068u;
    // 0x382068: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x382068u;
    {
        const bool branch_taken_0x382068 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x382068) {
            ctx->pc = 0x382078u;
            goto label_382078;
        }
    }
    ctx->pc = 0x382070u;
    // 0x382070: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x382070u;
    {
        const bool branch_taken_0x382070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382070) {
            ctx->pc = 0x382380u;
            goto label_382380;
        }
    }
    ctx->pc = 0x382078u;
label_382078:
    // 0x382078: 0x10a00059  beqz        $a1, . + 4 + (0x59 << 2)
    ctx->pc = 0x382078u;
    {
        const bool branch_taken_0x382078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x382078) {
            ctx->pc = 0x3821E0u;
            goto label_3821e0;
        }
    }
    ctx->pc = 0x382080u;
    // 0x382080: 0x92040559  lbu         $a0, 0x559($s0)
    ctx->pc = 0x382080u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1369)));
    // 0x382084: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x382084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x382088: 0x24421e40  addiu       $v0, $v0, 0x1E40
    ctx->pc = 0x382088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
    // 0x38208c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x38208cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x382090: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x382090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x382094: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x382094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x382098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x382098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38209c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x38209cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3820a0: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x3820a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3820a4: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x3820A4u;
    {
        const bool branch_taken_0x3820a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3820A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820A4u;
        // 0x3820a8: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3820a4) {
            ctx->pc = 0x3821A0u;
            goto label_3821a0;
        }
    }
    ctx->pc = 0x3820ACu;
    // 0x3820ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3820acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3820b0: 0x24631e70  addiu       $v1, $v1, 0x1E70
    ctx->pc = 0x3820b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7792));
    // 0x3820b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3820b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3820b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3820b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3820bc: 0x400008  jr          $v0
    ctx->pc = 0x3820BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3820C8u: goto label_3820c8;
            case 0x3820E8u: goto label_3820e8;
            case 0x382108u: goto label_382108;
            case 0x382128u: goto label_382128;
            case 0x382148u: goto label_382148;
            case 0x382168u: goto label_382168;
            case 0x382188u: goto label_382188;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3820BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3820C4u;
    // 0x3820c4: 0x0  nop
    ctx->pc = 0x3820c4u;
    // NOP
label_3820c8:
    // 0x3820c8: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x3820c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x3820cc: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3820ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3820d0: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3820d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3820d4: 0xc0aae60  jal         func_2AB980
    ctx->pc = 0x3820D4u;
    SET_GPR_U32(ctx, 31, 0x3820DCu);
    ctx->pc = 0x3820D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3820D4u;
    // 0x3820d8: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB980u, 0x3820D4u, 0x3820DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3820DCu;
label_3820dc:
    // 0x3820dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3820DCu;
    {
        const bool branch_taken_0x3820dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3820E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820DCu;
        // 0x3820e0: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3820dc) {
            ctx->pc = 0x3821A0u;
            goto label_3821a0;
        }
    }
    ctx->pc = 0x3820E4u;
    // 0x3820e4: 0x0  nop
    ctx->pc = 0x3820e4u;
    // NOP
label_3820e8:
    // 0x3820e8: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x3820e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x3820ec: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3820ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3820f0: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3820f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3820f4: 0xc0aae70  jal         func_2AB9C0
    ctx->pc = 0x3820F4u;
    SET_GPR_U32(ctx, 31, 0x3820FCu);
    ctx->pc = 0x3820F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3820F4u;
    // 0x3820f8: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB9C0u, 0x3820F4u, 0x3820FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3820FCu;
label_3820fc:
    // 0x3820fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3820FCu;
    {
        const bool branch_taken_0x3820fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820FCu;
        // 0x382100: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3820fc) {
            ctx->pc = 0x3821A0u;
            goto label_3821a0;
        }
    }
    ctx->pc = 0x382104u;
    // 0x382104: 0x0  nop
    ctx->pc = 0x382104u;
    // NOP
label_382108:
    // 0x382108: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x382108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x38210c: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x38210cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x382110: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x382110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x382114: 0xc0aae80  jal         func_2ABA00
    ctx->pc = 0x382114u;
    SET_GPR_U32(ctx, 31, 0x38211Cu);
    ctx->pc = 0x382118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382114u;
    // 0x382118: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA00u, 0x382114u, 0x38211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38211Cu;
label_38211c:
    // 0x38211c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x38211Cu;
    {
        const bool branch_taken_0x38211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38211Cu;
        // 0x382120: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38211c) {
            ctx->pc = 0x3821A0u;
            goto label_3821a0;
        }
    }
    ctx->pc = 0x382124u;
    // 0x382124: 0x0  nop
    ctx->pc = 0x382124u;
    // NOP
label_382128:
    // 0x382128: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x382128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x38212c: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x38212cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x382130: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x382130u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x382134: 0xc0aae90  jal         func_2ABA40
    ctx->pc = 0x382134u;
    SET_GPR_U32(ctx, 31, 0x38213Cu);
    ctx->pc = 0x382138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382134u;
    // 0x382138: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA40u, 0x382134u, 0x38213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38213Cu;
label_38213c:
    // 0x38213c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x38213Cu;
    {
        const bool branch_taken_0x38213c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38213Cu;
        // 0x382140: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38213c) {
            ctx->pc = 0x3821A0u;
            goto label_3821a0;
        }
    }
    ctx->pc = 0x382144u;
    // 0x382144: 0x0  nop
    ctx->pc = 0x382144u;
    // NOP
label_382148:
    // 0x382148: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x382148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x38214c: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x38214cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x382150: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x382150u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x382154: 0xc0aaeb0  jal         func_2ABAC0
    ctx->pc = 0x382154u;
    SET_GPR_U32(ctx, 31, 0x38215Cu);
    ctx->pc = 0x382158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382154u;
    // 0x382158: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABAC0u, 0x382154u, 0x38215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38215Cu;
label_38215c:
    // 0x38215c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38215Cu;
    {
        const bool branch_taken_0x38215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38215Cu;
        // 0x382160: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38215c) {
            ctx->pc = 0x3821A0u;
            goto label_3821a0;
        }
    }
    ctx->pc = 0x382164u;
    // 0x382164: 0x0  nop
    ctx->pc = 0x382164u;
    // NOP
label_382168:
    // 0x382168: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x382168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x38216c: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x38216cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x382170: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x382170u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x382174: 0xc0aaec0  jal         func_2ABB00
    ctx->pc = 0x382174u;
    SET_GPR_U32(ctx, 31, 0x38217Cu);
    ctx->pc = 0x382178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382174u;
    // 0x382178: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABB00u, 0x382174u, 0x38217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38217Cu;
label_38217c:
    // 0x38217c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38217Cu;
    {
        const bool branch_taken_0x38217c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38217Cu;
        // 0x382180: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38217c) {
            ctx->pc = 0x3821A0u;
            goto label_3821a0;
        }
    }
    ctx->pc = 0x382184u;
    // 0x382184: 0x0  nop
    ctx->pc = 0x382184u;
    // NOP
label_382188:
    // 0x382188: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x382188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x38218c: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x38218cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x382190: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x382190u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x382194: 0xc0aaea0  jal         func_2ABA80
    ctx->pc = 0x382194u;
    SET_GPR_U32(ctx, 31, 0x38219Cu);
    ctx->pc = 0x382198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382194u;
    // 0x382198: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA80u, 0x382194u, 0x38219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38219Cu;
label_38219c:
    // 0x38219c: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x38219cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
label_3821a0:
    // 0x3821a0: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3821a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3821a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3821a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3821a8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3821a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3821ac: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3821acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3821b0: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x3821b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x3821b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3821b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3821b8: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3821b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3821bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3821bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3821c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3821c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3821c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3821c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3821c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3821c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3821cc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3821CCu;
    SET_GPR_U32(ctx, 31, 0x3821D4u);
    ctx->pc = 0x3821D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3821CCu;
    // 0x3821d0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3821CCu, 0x3821D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3821D4u;
label_3821d4:
    // 0x3821d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3821D4u;
    {
        const bool branch_taken_0x3821d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3821d4) {
            ctx->pc = 0x3821E8u;
            goto label_3821e8;
        }
    }
    ctx->pc = 0x3821DCu;
    // 0x3821dc: 0x0  nop
    ctx->pc = 0x3821dcu;
    // NOP
label_3821e0:
    // 0x3821e0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3821E0u;
    SET_GPR_U32(ctx, 31, 0x3821E8u);
    ctx->pc = 0x3821E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3821E0u;
    // 0x3821e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3821E0u, 0x3821E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3821E8u;
label_3821e8:
    // 0x3821e8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3821e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3821ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3821ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3821f0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3821F0u;
    {
        const bool branch_taken_0x3821f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3821F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821F0u;
        // 0x3821f4: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3821f0) {
            ctx->pc = 0x382380u;
            goto label_382380;
        }
    }
    ctx->pc = 0x3821F8u;
label_3821f8:
    // 0x3821f8: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3821f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3821fc: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3821fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x382200: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x382200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x382204: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x382204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x382208: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x382208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x38220c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x38220cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x382210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x382210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x382214: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x382214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_382218:
    // 0x382218: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x382218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x38221c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382220: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x382220u;
    SET_GPR_U32(ctx, 31, 0x382228u);
    ctx->pc = 0x382224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382220u;
    // 0x382224: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x382220u, 0x382228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382228u;
label_382228:
    // 0x382228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382228u;
    {
        const bool branch_taken_0x382228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382228u;
        // 0x38222c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382228) {
            ctx->pc = 0x382238u;
            goto label_382238;
        }
    }
    ctx->pc = 0x382230u;
    // 0x382230: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x382230u;
    SET_GPR_U32(ctx, 31, 0x382238u);
    ctx->pc = 0x382234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382230u;
    // 0x382234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x382230u, 0x382238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382238u;
label_382238:
    // 0x382238: 0x92050559  lbu         $a1, 0x559($s0)
    ctx->pc = 0x382238u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1369)));
    // 0x38223c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x38223cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x382240: 0x86060510  lh          $a2, 0x510($s0)
    ctx->pc = 0x382240u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x382244: 0x24631e42  addiu       $v1, $v1, 0x1E42
    ctx->pc = 0x382244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7746));
    // 0x382248: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x382248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x38224c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x38224cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x382250: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x382250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x382254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x382254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x382258: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x382258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38225c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x38225cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x382260: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x382260u;
    {
        const bool branch_taken_0x382260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382260u;
        // 0x382264: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382260) {
            ctx->pc = 0x3822D8u;
            goto label_3822d8;
        }
    }
    ctx->pc = 0x382268u;
    // 0x382268: 0x24631e44  addiu       $v1, $v1, 0x1E44
    ctx->pc = 0x382268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7748));
    // 0x38226c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x382270: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x382270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x382274: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x382274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x382278: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x382278u;
    {
        const bool branch_taken_0x382278 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x38227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382278u;
        // 0x38227c: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382278) {
            ctx->pc = 0x3822D8u;
            goto label_3822d8;
        }
    }
    ctx->pc = 0x382280u;
    // 0x382280: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x382280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x382284: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x382284u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x382288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38228c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x38228cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x382290: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x382290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382294: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x382294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x382298: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x382298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x38229c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x38229cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3822a0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3822a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3822a4: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3822a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x3822a8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3822a8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3822ac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3822acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3822b0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3822b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3822b4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3822b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3822b8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3822b8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3822bc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3822bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3822c0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3822c0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3822c4: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3822c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3822c8: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3822c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3822cc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3822CCu;
    SET_GPR_U32(ctx, 31, 0x3822D4u);
    ctx->pc = 0x3822D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3822CCu;
    // 0x3822d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3822CCu, 0x3822D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3822D4u;
label_3822d4:
    // 0x3822d4: 0x0  nop
    ctx->pc = 0x3822d4u;
    // NOP
label_3822d8:
    // 0x3822d8: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3822d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3822dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3822DCu;
    {
        const bool branch_taken_0x3822dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3822E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822DCu;
        // 0x3822e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822dc) {
            ctx->pc = 0x3822F0u;
            goto label_3822f0;
        }
    }
    ctx->pc = 0x3822E4u;
    // 0x3822e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3822E4u;
    {
        const bool branch_taken_0x3822e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3822e4) {
            ctx->pc = 0x382370u;
            goto label_382370;
        }
    }
    ctx->pc = 0x3822ECu;
    // 0x3822ec: 0x0  nop
    ctx->pc = 0x3822ecu;
    // NOP
label_3822f0:
    // 0x3822f0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3822f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3822f4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3822f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3822f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3822f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3822fc: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3822fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x382300: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x382300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x382304: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x382304u;
    {
        const bool branch_taken_0x382304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x382304) {
            ctx->pc = 0x382340u;
            goto label_382340;
        }
    }
    ctx->pc = 0x38230Cu;
    // 0x38230c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x38230cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x382310: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x382310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x382314: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x382314u;
    {
        const bool branch_taken_0x382314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382314u;
        // 0x382318: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382314) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x38231Cu;
    // 0x38231c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x382320: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x382320u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x382324: 0x0  nop
    ctx->pc = 0x382324u;
    // NOP
    // 0x382328: 0x0  nop
    ctx->pc = 0x382328u;
    // NOP
    // 0x38232c: 0x2010  mfhi        $a0
    ctx->pc = 0x38232cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x382330: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x382330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x382334: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x382334u;
    {
        const bool branch_taken_0x382334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382334u;
        // 0x382338: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382334) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x38233Cu;
    // 0x38233c: 0x0  nop
    ctx->pc = 0x38233cu;
    // NOP
label_382340:
    // 0x382340: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x382340u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x382344: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x382344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x382348: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x382348u;
    {
        const bool branch_taken_0x382348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x382348) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x382350u;
    // 0x382350: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x382350u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x382354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x382354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x382358: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x382358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x38235c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38235Cu;
    {
        const bool branch_taken_0x38235c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38235Cu;
        // 0x382360: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38235c) {
            ctx->pc = 0x382370u;
            goto label_382370;
        }
    }
    ctx->pc = 0x382364u;
    // 0x382364: 0x0  nop
    ctx->pc = 0x382364u;
    // NOP
label_382368:
    // 0x382368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x382368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38236c: 0x0  nop
    ctx->pc = 0x38236cu;
    // NOP
label_382370:
    // 0x382370: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x382370u;
    {
        const bool branch_taken_0x382370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382370u;
        // 0x382374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382370) {
            ctx->pc = 0x382380u;
            goto label_382380;
        }
    }
    ctx->pc = 0x382378u;
    // 0x382378: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x382378u;
    SET_GPR_U32(ctx, 31, 0x382380u);
    ctx->pc = 0x38237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382378u;
    // 0x38237c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x382378u, 0x382380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382380u;
label_382380:
    // 0x382380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x382380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x382384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382388: 0x3e00008  jr          $ra
    ctx->pc = 0x382388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382388u;
        // 0x38238c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382390u;
}
