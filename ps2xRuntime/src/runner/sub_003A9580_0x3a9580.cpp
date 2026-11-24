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

// Function: sub_003A9580
// Address: 0x3a9580 - 0x3a98c8
void sub_003A9580_0x3a9580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9580_0x3a9580");
#endif

    switch (ctx->pc) {
        case 0x3a95f4u: goto label_3a95f4;
        case 0x3a9638u: goto label_3a9638;
        case 0x3a9654u: goto label_3a9654;
        case 0x3a9684u: goto label_3a9684;
        case 0x3a96dcu: goto label_3a96dc;
        case 0x3a96f4u: goto label_3a96f4;
        case 0x3a9704u: goto label_3a9704;
        case 0x3a9748u: goto label_3a9748;
        case 0x3a9764u: goto label_3a9764;
        case 0x3a97a8u: goto label_3a97a8;
        case 0x3a97bcu: goto label_3a97bc;
        case 0x3a97dcu: goto label_3a97dc;
        case 0x3a97ecu: goto label_3a97ec;
        case 0x3a981cu: goto label_3a981c;
        case 0x3a982cu: goto label_3a982c;
        case 0x3a984cu: goto label_3a984c;
        case 0x3a9860u: goto label_3a9860;
        case 0x3a9874u: goto label_3a9874;
        case 0x3a9888u: goto label_3a9888;
        default: break;
    }

    ctx->pc = 0x3a9580u;

    // 0x3a9580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a9580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a9584: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3a9584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a9588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a9588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a958c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a9590: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x3a9590u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a9594: 0x10c500be  beq         $a2, $a1, . + 4 + (0xBE << 2)
    ctx->pc = 0x3A9594u;
    {
        const bool branch_taken_0x3a9594 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3A9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9594u;
        // 0x3a9598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9594) {
            ctx->pc = 0x3A9890u;
            goto label_3a9890;
        }
    }
    ctx->pc = 0x3A959Cu;
    // 0x3a959c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a959cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a95a0: 0x10c30099  beq         $a2, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x3A95A0u;
    {
        const bool branch_taken_0x3a95a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95A0u;
        // 0x3a95a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95a0) {
            ctx->pc = 0x3A9808u;
            goto label_3a9808;
        }
    }
    ctx->pc = 0x3A95A8u;
    // 0x3a95a8: 0x10c30087  beq         $a2, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x3A95A8u;
    {
        const bool branch_taken_0x3a95a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a95a8) {
            ctx->pc = 0x3A97C8u;
            goto label_3a97c8;
        }
    }
    ctx->pc = 0x3A95B0u;
    // 0x3a95b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a95b4: 0x10c30036  beq         $a2, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3A95B4u;
    {
        const bool branch_taken_0x3a95b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a95b4) {
            ctx->pc = 0x3A9690u;
            goto label_3a9690;
        }
    }
    ctx->pc = 0x3A95BCu;
    // 0x3a95bc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A95BCu;
    {
        const bool branch_taken_0x3a95bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a95bc) {
            ctx->pc = 0x3A95D0u;
            goto label_3a95d0;
        }
    }
    ctx->pc = 0x3A95C4u;
    // 0x3a95c4: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x3A95C4u;
    {
        const bool branch_taken_0x3a95c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a95c4) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A95CCu;
    // 0x3a95cc: 0x0  nop
    ctx->pc = 0x3a95ccu;
    // NOP
label_3a95d0:
    // 0x3a95d0: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a95d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a95d4: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x3A95D4u;
    {
        const bool branch_taken_0x3a95d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a95d4) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A95DCu;
    // 0x3a95dc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3a95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a95e0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a95e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a95e4: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3a95e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a95e8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a95e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a95ec: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A95ECu;
    SET_GPR_U32(ctx, 31, 0x3A95F4u);
    ctx->pc = 0x3A95F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A95ECu;
    // 0x3a95f0: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A95ECu, 0x3A95F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A95F4u;
label_3a95f4:
    // 0x3a95f4: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x3a95f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a95f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a95fc: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A95FCu;
    {
        const bool branch_taken_0x3a95fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95FCu;
        // 0x3a9600: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95fc) {
            ctx->pc = 0x3A9670u;
            goto label_3a9670;
        }
    }
    ctx->pc = 0x3A9604u;
    // 0x3a9604: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A9604u;
    {
        const bool branch_taken_0x3a9604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9604u;
        // 0x3a9608: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9604) {
            ctx->pc = 0x3A9670u;
            goto label_3a9670;
        }
    }
    ctx->pc = 0x3A960Cu;
    // 0x3a960c: 0x1087000c  beq         $a0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x3A960Cu;
    {
        const bool branch_taken_0x3a960c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x3a960c) {
            ctx->pc = 0x3A9640u;
            goto label_3a9640;
        }
    }
    ctx->pc = 0x3A9614u;
    // 0x3a9614: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9614u;
    {
        const bool branch_taken_0x3a9614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9614) {
            ctx->pc = 0x3A9628u;
            goto label_3a9628;
        }
    }
    ctx->pc = 0x3A961Cu;
    // 0x3a961c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x3A961Cu;
    {
        const bool branch_taken_0x3a961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a961c) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A9624u;
    // 0x3a9624: 0x0  nop
    ctx->pc = 0x3a9624u;
    // NOP
label_3a9628:
    // 0x3a9628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a962c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3a962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a9630: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9630u;
    SET_GPR_U32(ctx, 31, 0x3A9638u);
    ctx->pc = 0x3A9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9630u;
    // 0x3a9634: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9630u, 0x3A9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9638u;
label_3a9638:
    // 0x3a9638: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3A9638u;
    {
        const bool branch_taken_0x3a9638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9638) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A9640u;
label_3a9640:
    // 0x3a9640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9644: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3a9644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3a9648: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3a9648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3a964c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A964Cu;
    SET_GPR_U32(ctx, 31, 0x3A9654u);
    ctx->pc = 0x3A9650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A964Cu;
    // 0x3a9650: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A964Cu, 0x3A9654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9654u;
label_3a9654:
    // 0x3a9654: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a9654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9658: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a9658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a965c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a965cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a9660: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9664: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9668: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3A9668u;
    {
        const bool branch_taken_0x3a9668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9668u;
        // 0x3a966c: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9668) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A9670u;
label_3a9670:
    // 0x3a9670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9674: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3a9674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a9678: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x3a9678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3a967c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A967Cu;
    SET_GPR_U32(ctx, 31, 0x3A9684u);
    ctx->pc = 0x3A9680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A967Cu;
    // 0x3a9680: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A967Cu, 0x3A9684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9684u;
label_3a9684:
    // 0x3a9684: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x3A9684u;
    {
        const bool branch_taken_0x3a9684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9684) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A968Cu;
    // 0x3a968c: 0x0  nop
    ctx->pc = 0x3a968cu;
    // NOP
label_3a9690:
    // 0x3a9690: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a9690u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9694: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a9694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a9698: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a9698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a969c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3a969cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a96a0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3a96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a96a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a96a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a96ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a96acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a96b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a96b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a96b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a96b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A96B8u;
    {
        const bool branch_taken_0x3a96b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a96b8) {
            ctx->pc = 0x3A96E8u;
            goto label_3a96e8;
        }
    }
    ctx->pc = 0x3A96C0u;
    // 0x3a96c0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a96c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a96c4: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a96c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a96c8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a96c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a96cc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a96ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a96d0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a96d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a96d4: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A96D4u;
    SET_GPR_U32(ctx, 31, 0x3A96DCu);
    ctx->pc = 0x3A96D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A96D4u;
    // 0x3a96d8: 0x82050007  lb          $a1, 0x7($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A96D4u, 0x3A96DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A96DCu;
label_3a96dc:
    // 0x3a96dc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3A96DCu;
    {
        const bool branch_taken_0x3a96dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a96dc) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A96E4u;
    // 0x3a96e4: 0x0  nop
    ctx->pc = 0x3a96e4u;
    // NOP
label_3a96e8:
    // 0x3a96e8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a96e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a96ec: 0xc095150  jal         func_254540
    ctx->pc = 0x3A96ECu;
    SET_GPR_U32(ctx, 31, 0x3A96F4u);
    ctx->pc = 0x3A96F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A96ECu;
    // 0x3a96f0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A96ECu, 0x3A96F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A96F4u;
label_3a96f4:
    // 0x3a96f4: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x3A96F4u;
    {
        const bool branch_taken_0x3a96f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96F4u;
        // 0x3a96f8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a96f4) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A96FCu;
    // 0x3a96fc: 0xc095154  jal         func_254550
    ctx->pc = 0x3A96FCu;
    SET_GPR_U32(ctx, 31, 0x3A9704u);
    ctx->pc = 0x3A9700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A96FCu;
    // 0x3a9700: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3A96FCu, 0x3A9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9704u;
label_3a9704:
    // 0x3a9704: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3a9704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3a9708: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a9708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a970c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3a970cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3a9710: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A9710u;
    {
        const bool branch_taken_0x3a9710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9710u;
        // 0x3a9714: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9710) {
            ctx->pc = 0x3A9770u;
            goto label_3a9770;
        }
    }
    ctx->pc = 0x3A9718u;
    // 0x3a9718: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A9718u;
    {
        const bool branch_taken_0x3a9718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a9718) {
            ctx->pc = 0x3A9770u;
            goto label_3a9770;
        }
    }
    ctx->pc = 0x3A9720u;
    // 0x3a9720: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9720u;
    {
        const bool branch_taken_0x3a9720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9720) {
            ctx->pc = 0x3A9730u;
            goto label_3a9730;
        }
    }
    ctx->pc = 0x3A9728u;
    // 0x3a9728: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3A9728u;
    {
        const bool branch_taken_0x3a9728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9728) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A9730u;
label_3a9730:
    // 0x3a9730: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3a9730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a9734: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a9738: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a9738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a973c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a9740: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A9740u;
    SET_GPR_U32(ctx, 31, 0x3A9748u);
    ctx->pc = 0x3A9744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9740u;
    // 0x3a9744: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A9740u, 0x3A9748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9748u;
label_3a9748:
    // 0x3a9748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a9748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a974c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9750: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x3a9750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a9754: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3a9754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3a9758: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x3a9758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3a975c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A975Cu;
    SET_GPR_U32(ctx, 31, 0x3A9764u);
    ctx->pc = 0x3A9760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A975Cu;
    // 0x3a9760: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A975Cu, 0x3A9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9764u;
label_3a9764:
    // 0x3a9764: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3A9764u;
    {
        const bool branch_taken_0x3a9764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9764) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A976Cu;
    // 0x3a976c: 0x0  nop
    ctx->pc = 0x3a976cu;
    // NOP
label_3a9770:
    // 0x3a9770: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a9770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9774: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x3a9774u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a9778: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a977c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a9780: 0x65200a  movz        $a0, $v1, $a1
    ctx->pc = 0x3a9780u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3a9784: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x3a9784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a9788: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a978c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a978cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9790: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9794: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x3a9794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a9798: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x3A9798u;
    {
        const bool branch_taken_0x3a9798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9798u;
        // 0x3a979c: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9798) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A97A0u;
    // 0x3a97a0: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A97A0u;
    SET_GPR_U32(ctx, 31, 0x3A97A8u);
    ctx->pc = 0x3A97A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A97A0u;
    // 0x3a97a4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A97A0u, 0x3A97A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97A8u;
label_3a97a8:
    // 0x3a97a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a97a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a97ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3a97acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3a97b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a97b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a97b4: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A97B4u;
    SET_GPR_U32(ctx, 31, 0x3A97BCu);
    ctx->pc = 0x3A97B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A97B4u;
    // 0x3a97b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A97B4u, 0x3A97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97BCu;
label_3a97bc:
    // 0x3a97bc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3A97BCu;
    {
        const bool branch_taken_0x3a97bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a97bc) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A97C4u;
    // 0x3a97c4: 0x0  nop
    ctx->pc = 0x3a97c4u;
    // NOP
label_3a97c8:
    // 0x3a97c8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a97c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a97cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a97d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a97d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a97d4: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A97D4u;
    SET_GPR_U32(ctx, 31, 0x3A97DCu);
    ctx->pc = 0x3A97D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A97D4u;
    // 0x3a97d8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A97D4u, 0x3A97DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97DCu;
label_3a97dc:
    // 0x3a97dc: 0x1c400036  bgtz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3A97DCu;
    {
        const bool branch_taken_0x3a97dc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97DCu;
        // 0x3a97e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97dc) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A97E4u;
    // 0x3a97e4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A97E4u;
    SET_GPR_U32(ctx, 31, 0x3A97ECu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A97E4u, 0x3A97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97ECu;
label_3a97ec:
    // 0x3a97ec: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A97ECu;
    {
        const bool branch_taken_0x3a97ec = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a97ec) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A97F4u;
    // 0x3a97f4: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3a97f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a97f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a97fc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3A97FCu;
    {
        const bool branch_taken_0x3a97fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97FCu;
        // 0x3a9800: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97fc) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A9804u;
    // 0x3a9804: 0x0  nop
    ctx->pc = 0x3a9804u;
    // NOP
label_3a9808:
    // 0x3a9808: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a9808u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a980c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a980cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a9810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a9810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9814: 0xc0527e0  jal         func_149F80
    ctx->pc = 0x3A9814u;
    SET_GPR_U32(ctx, 31, 0x3A981Cu);
    ctx->pc = 0x3A9818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9814u;
    // 0x3a9818: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149F80u, 0x3A9814u, 0x3A981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A981Cu;
label_3a981c:
    // 0x3a981c: 0x1c400026  bgtz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A981Cu;
    {
        const bool branch_taken_0x3a981c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A981Cu;
        // 0x3a9820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a981c) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A9824u;
    // 0x3a9824: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A9824u;
    SET_GPR_U32(ctx, 31, 0x3A982Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A9824u, 0x3A982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A982Cu;
label_3a982c:
    // 0x3a982c: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A982Cu;
    {
        const bool branch_taken_0x3a982c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a982c) {
            ctx->pc = 0x3A9868u;
            goto label_3a9868;
        }
    }
    ctx->pc = 0x3A9834u;
    // 0x3a9834: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3a9834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a9838: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a983c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a983cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a9840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a9840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a9844: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A9844u;
    SET_GPR_U32(ctx, 31, 0x3A984Cu);
    ctx->pc = 0x3A9848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9844u;
    // 0x3a9848: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A9844u, 0x3A984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A984Cu;
label_3a984c:
    // 0x3a984c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a984cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9850: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a9850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a9854: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a9854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a9858: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9858u;
    SET_GPR_U32(ctx, 31, 0x3A9860u);
    ctx->pc = 0x3A985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9858u;
    // 0x3a985c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9858u, 0x3A9860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9860u;
label_3a9860:
    // 0x3a9860: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3A9860u;
    {
        const bool branch_taken_0x3a9860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9860u;
        // 0x3a9864: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9860) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A9868u;
label_3a9868:
    // 0x3a9868: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a986c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A986Cu;
    SET_GPR_U32(ctx, 31, 0x3A9874u);
    ctx->pc = 0x3A9870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A986Cu;
    // 0x3a9870: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A986Cu, 0x3A9874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9874u;
label_3a9874:
    // 0x3a9874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9878: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x3a9878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x3a987c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a987cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a9880: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9880u;
    SET_GPR_U32(ctx, 31, 0x3A9888u);
    ctx->pc = 0x3A9884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9880u;
    // 0x3a9884: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9880u, 0x3A9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9888u;
label_3a9888:
    // 0x3a9888: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A9888u;
    {
        const bool branch_taken_0x3a9888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9888) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A9890u;
label_3a9890:
    // 0x3a9890: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a9890u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a9894: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A9894u;
    {
        const bool branch_taken_0x3a9894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9894u;
        // 0x3a9898: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9894) {
            ctx->pc = 0x3A98B8u;
            goto label_3a98b8;
        }
    }
    ctx->pc = 0x3A989Cu;
    // 0x3a989c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3a989cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a98a0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a98a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a98a4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a98a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a98a8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a98a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a98ac: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x3a98acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a98b0: 0xa6050014  sh          $a1, 0x14($s0)
    ctx->pc = 0x3a98b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x3a98b4: 0x0  nop
    ctx->pc = 0x3a98b4u;
    // NOP
label_3a98b8:
    // 0x3a98b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a98b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a98bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a98bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a98c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A98C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98C0u;
        // 0x3a98c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A98C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A98C8u;
}
