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

// Function: sub_003AA080
// Address: 0x3aa080 - 0x3aa238
void sub_003AA080_0x3aa080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA080_0x3aa080");
#endif

    switch (ctx->pc) {
        case 0x3aa0d4u: goto label_3aa0d4;
        case 0x3aa0f0u: goto label_3aa0f0;
        case 0x3aa128u: goto label_3aa128;
        case 0x3aa144u: goto label_3aa144;
        case 0x3aa19cu: goto label_3aa19c;
        case 0x3aa1bcu: goto label_3aa1bc;
        case 0x3aa214u: goto label_3aa214;
        case 0x3aa228u: goto label_3aa228;
        default: break;
    }

    ctx->pc = 0x3aa080u;

    // 0x3aa080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aa080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aa084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3aa084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aa088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3aa08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aa08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aa090: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x3aa090u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3aa094: 0x10a7002e  beq         $a1, $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x3AA094u;
    {
        const bool branch_taken_0x3aa094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x3AA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA094u;
        // 0x3aa098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa094) {
            ctx->pc = 0x3AA150u;
            goto label_3aa150;
        }
    }
    ctx->pc = 0x3AA09Cu;
    // 0x3aa09c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA09Cu;
    {
        const bool branch_taken_0x3aa09c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa09c) {
            ctx->pc = 0x3AA0B0u;
            goto label_3aa0b0;
        }
    }
    ctx->pc = 0x3AA0A4u;
    // 0x3aa0a4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3AA0A4u;
    {
        const bool branch_taken_0x3aa0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa0a4) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA0ACu;
    // 0x3aa0ac: 0x0  nop
    ctx->pc = 0x3aa0acu;
    // NOP
label_3aa0b0:
    // 0x3aa0b0: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3aa0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3aa0b4: 0x1460005c  bnez        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x3AA0B4u;
    {
        const bool branch_taken_0x3aa0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa0b4) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA0BCu;
    // 0x3aa0bc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3aa0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3aa0c0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3aa0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3aa0c4: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3aa0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa0c8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3aa0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3aa0cc: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3AA0CCu;
    SET_GPR_U32(ctx, 31, 0x3AA0D4u);
    ctx->pc = 0x3AA0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA0CCu;
    // 0x3aa0d0: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3AA0CCu, 0x3AA0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA0D4u;
label_3aa0d4:
    // 0x3aa0d4: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x3aa0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3aa0d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AA0D8u;
    {
        const bool branch_taken_0x3aa0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0D8u;
        // 0x3aa0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0d8) {
            ctx->pc = 0x3AA0F8u;
            goto label_3aa0f8;
        }
    }
    ctx->pc = 0x3AA0E0u;
    // 0x3aa0e0: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3aa0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3aa0e4: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x3aa0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x3aa0e8: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA0E8u;
    SET_GPR_U32(ctx, 31, 0x3AA0F0u);
    ctx->pc = 0x3AA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA0E8u;
    // 0x3aa0ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA0E8u, 0x3AA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA0F0u;
label_3aa0f0:
    // 0x3aa0f0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3AA0F0u;
    {
        const bool branch_taken_0x3aa0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa0f0) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA0F8u;
label_3aa0f8:
    // 0x3aa0f8: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x3aa0f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3aa0fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3aa0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3aa100: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AA100u;
    {
        const bool branch_taken_0x3aa100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa100) {
            ctx->pc = 0x3AA130u;
            goto label_3aa130;
        }
    }
    ctx->pc = 0x3AA108u;
    // 0x3aa108: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x3aa108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x3aa10c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3aa10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3aa110: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AA110u;
    {
        const bool branch_taken_0x3aa110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA110u;
        // 0x3aa114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa110) {
            ctx->pc = 0x3AA130u;
            goto label_3aa130;
        }
    }
    ctx->pc = 0x3AA118u;
    // 0x3aa118: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3aa118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3aa11c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3aa11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa120: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA120u;
    SET_GPR_U32(ctx, 31, 0x3AA128u);
    ctx->pc = 0x3AA124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA120u;
    // 0x3aa124: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA120u, 0x3AA128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA128u;
label_3aa128:
    // 0x3aa128: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3AA128u;
    {
        const bool branch_taken_0x3aa128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa128) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA130u;
label_3aa130:
    // 0x3aa130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa134: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3aa134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3aa138: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3aa138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3aa13c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA13Cu;
    SET_GPR_U32(ctx, 31, 0x3AA144u);
    ctx->pc = 0x3AA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA13Cu;
    // 0x3aa140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA13Cu, 0x3AA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA144u;
label_3aa144:
    // 0x3aa144: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3AA144u;
    {
        const bool branch_taken_0x3aa144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa144) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA14Cu;
    // 0x3aa14c: 0x0  nop
    ctx->pc = 0x3aa14cu;
    // NOP
label_3aa150:
    // 0x3aa150: 0x82060007  lb          $a2, 0x7($s0)
    ctx->pc = 0x3aa150u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aa154: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3aa154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3aa158: 0x24638e98  addiu       $v1, $v1, -0x7168
    ctx->pc = 0x3aa158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938264));
    // 0x3aa15c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3aa15cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3aa160: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3aa160u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3aa164: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3aa164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3aa168: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3aa168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3aa16c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3aa16cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3aa170: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3aa170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3aa174: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3aa174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3aa178: 0x1467000b  bne         $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x3AA178u;
    {
        const bool branch_taken_0x3aa178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3aa178) {
            ctx->pc = 0x3AA1A8u;
            goto label_3aa1a8;
        }
    }
    ctx->pc = 0x3AA180u;
    // 0x3aa180: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3aa180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa184: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aa184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa188: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3aa188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa18c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3aa18cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa190: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3aa190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa194: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3AA194u;
    SET_GPR_U32(ctx, 31, 0x3AA19Cu);
    ctx->pc = 0x3AA198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA194u;
    // 0x3aa198: 0x82050007  lb          $a1, 0x7($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3AA194u, 0x3AA19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA19Cu;
label_3aa19c:
    // 0x3aa19c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3AA19Cu;
    {
        const bool branch_taken_0x3aa19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa19c) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA1A4u;
    // 0x3aa1a4: 0x0  nop
    ctx->pc = 0x3aa1a4u;
    // NOP
label_3aa1a8:
    // 0x3aa1a8: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3aa1a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3aa1ac: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3AA1ACu;
    {
        const bool branch_taken_0x3aa1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1ACu;
        // 0x3aa1b0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa1ac) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA1B4u;
    // 0x3aa1b4: 0xc095150  jal         func_254540
    ctx->pc = 0x3AA1B4u;
    SET_GPR_U32(ctx, 31, 0x3AA1BCu);
    ctx->pc = 0x3AA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA1B4u;
    // 0x3aa1b8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3AA1B4u, 0x3AA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA1BCu;
label_3aa1bc:
    // 0x3aa1bc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AA1BCu;
    {
        const bool branch_taken_0x3aa1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa1bc) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA1C4u;
    // 0x3aa1c4: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x3aa1c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3aa1c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AA1C8u;
    {
        const bool branch_taken_0x3aa1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa1c8) {
            ctx->pc = 0x3AA1F0u;
            goto label_3aa1f0;
        }
    }
    ctx->pc = 0x3AA1D0u;
    // 0x3aa1d0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3aa1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa1d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3aa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa1d8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3aa1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aa1dc: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3aa1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa1e0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aa1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa1e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AA1E4u;
    {
        const bool branch_taken_0x3aa1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1E4u;
        // 0x3aa1e8: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa1e4) {
            ctx->pc = 0x3AA228u;
            goto label_3aa228;
        }
    }
    ctx->pc = 0x3AA1ECu;
    // 0x3aa1ec: 0x0  nop
    ctx->pc = 0x3aa1ecu;
    // NOP
label_3aa1f0:
    // 0x3aa1f0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3aa1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa1f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3aa1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3aa1f8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3aa1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3aa1fc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3aa1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa200: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3aa200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3aa204: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3aa204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa208: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aa208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa20c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3AA20Cu;
    SET_GPR_U32(ctx, 31, 0x3AA214u);
    ctx->pc = 0x3AA210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA20Cu;
    // 0x3aa210: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3AA20Cu, 0x3AA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA214u;
label_3aa214:
    // 0x3aa214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa218: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x3aa218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x3aa21c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3aa21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa220: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA220u;
    SET_GPR_U32(ctx, 31, 0x3AA228u);
    ctx->pc = 0x3AA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA220u;
    // 0x3aa224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA220u, 0x3AA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA228u;
label_3aa228:
    // 0x3aa228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3aa228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa22c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aa22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa230: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA230u;
        // 0x3aa234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA238u;
}
