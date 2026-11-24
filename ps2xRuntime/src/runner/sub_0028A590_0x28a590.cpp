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

// Function: sub_0028A590
// Address: 0x28a590 - 0x28a750
void sub_0028A590_0x28a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A590_0x28a590");
#endif

    switch (ctx->pc) {
        case 0x28a5e4u: goto label_28a5e4;
        case 0x28a5f8u: goto label_28a5f8;
        default: break;
    }

    ctx->pc = 0x28a590u;

    // 0x28a590: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28a594: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28a598: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28a598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28a59c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28a59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28a5a0: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x28a5a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28a5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28a5a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28a5a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28a5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28a5b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28a5b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28a5b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28a5b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28a5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28a5c0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28a5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28a5c8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x28a5c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5cc: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x28a5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28a5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28a5d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5dc: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x28A5DCu;
    SET_GPR_U32(ctx, 31, 0x28A5E4u);
    ctx->pc = 0x28A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5DCu;
    // 0x28a5e0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x28A5DCu, 0x28A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5E4u;
label_28a5e4:
    // 0x28a5e4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28A5E4u;
    {
        const bool branch_taken_0x28a5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5E4u;
        // 0x28a5e8: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5e4) {
            ctx->pc = 0x28A6A0u;
            goto label_28a6a0;
        }
    }
    ctx->pc = 0x28A5ECu;
    // 0x28a5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28a5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5f0: 0x248494b0  addiu       $a0, $a0, -0x6B50
    ctx->pc = 0x28a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939824));
    // 0x28a5f4: 0x0  nop
    ctx->pc = 0x28a5f4u;
    // NOP
label_28a5f8:
    // 0x28a5f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28a5fc: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x28A5FCu;
    {
        const bool branch_taken_0x28a5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5FCu;
        // 0x28a600: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5fc) {
            ctx->pc = 0x28A688u;
            goto label_28a688;
        }
    }
    ctx->pc = 0x28A604u;
    // 0x28a604: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28a608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a60c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x28a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x28a610: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x28a610u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28a614: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x28a614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
    // 0x28a618: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x28a618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x28a61c: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x28a61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x28a620: 0x248494b4  addiu       $a0, $a0, -0x6B4C
    ctx->pc = 0x28a620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939828));
    // 0x28a624: 0x246394b5  addiu       $v1, $v1, -0x6B4B
    ctx->pc = 0x28a624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939829));
    // 0x28a628: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x28a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x28a62c: 0xacd40000  sw          $s4, 0x0($a2)
    ctx->pc = 0x28a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
    // 0x28a630: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x28a630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28a634: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x28a634u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x28a638: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x28a638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x28a63c: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x28a63cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x28a640: 0x246394b6  addiu       $v1, $v1, -0x6B4A
    ctx->pc = 0x28a640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939830));
    // 0x28a644: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x28a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28a648: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x28a648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x28a64c: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x28a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x28a650: 0x246394b7  addiu       $v1, $v1, -0x6B49
    ctx->pc = 0x28a650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939831));
    // 0x28a654: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x28a654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28a658: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x28a658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x28a65c: 0xa0900000  sb          $s0, 0x0($a0)
    ctx->pc = 0x28a65cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a660: 0x246394b8  addiu       $v1, $v1, -0x6B48
    ctx->pc = 0x28a660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939832));
    // 0x28a664: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x28a664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28a668: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x28a668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x28a66c: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x28a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x28a670: 0x2463a0b0  addiu       $v1, $v1, -0x5F50
    ctx->pc = 0x28a670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942896));
    // 0x28a674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28a678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a67c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x28A67Cu;
    {
        const bool branch_taken_0x28a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A67Cu;
        // 0x28a680: 0xa0750000  sb          $s5, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a67c) {
            ctx->pc = 0x28A728u;
            goto label_28a728;
        }
    }
    ctx->pc = 0x28A684u;
    // 0x28a684: 0x0  nop
    ctx->pc = 0x28a684u;
    // NOP
label_28a688:
    // 0x28a688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28a68c: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x28a68cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x28a690: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x28A690u;
    {
        const bool branch_taken_0x28a690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A690u;
        // 0x28a694: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a690) {
            ctx->pc = 0x28A5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a5f8;
        }
    }
    ctx->pc = 0x28A698u;
    // 0x28a698: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28A698u;
    {
        const bool branch_taken_0x28a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A698u;
        // 0x28a69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a698) {
            ctx->pc = 0x28A728u;
            goto label_28a728;
        }
    }
    ctx->pc = 0x28A6A0u;
label_28a6a0:
    // 0x28a6a0: 0x8f8a8940  lw          $t2, -0x76C0($gp)
    ctx->pc = 0x28a6a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x28a6a4: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x28a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x28a6a8: 0x3c09008d  lui         $t1, 0x8D
    ctx->pc = 0x28a6a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)141 << 16));
    // 0x28a6ac: 0x2442a0b0  addiu       $v0, $v0, -0x5F50
    ctx->pc = 0x28a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942896));
    // 0x28a6b0: 0x3c08008d  lui         $t0, 0x8D
    ctx->pc = 0x28a6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)141 << 16));
    // 0x28a6b4: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x28a6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x28a6b8: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x28a6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x28a6bc: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a6c0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x28a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x28a6c4: 0x252994b0  addiu       $t1, $t1, -0x6B50
    ctx->pc = 0x28a6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294939824));
    // 0x28a6c8: 0x250894b4  addiu       $t0, $t0, -0x6B4C
    ctx->pc = 0x28a6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939828));
    // 0x28a6cc: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x28a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x28a6d0: 0x24e794b5  addiu       $a3, $a3, -0x6B4B
    ctx->pc = 0x28a6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939829));
    // 0x28a6d4: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x28a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x28a6d8: 0x24c694b6  addiu       $a2, $a2, -0x6B4A
    ctx->pc = 0x28a6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939830));
    // 0x28a6dc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x28a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x28a6e0: 0x24a594b7  addiu       $a1, $a1, -0x6B49
    ctx->pc = 0x28a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939831));
    // 0x28a6e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28a6e8: 0x248494b8  addiu       $a0, $a0, -0x6B48
    ctx->pc = 0x28a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939832));
    // 0x28a6ec: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x28a6f0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x28a6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x28a6f4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x28a6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28a6f8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x28a6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28a6fc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28a6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28a700: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28a700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28a704: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x28a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a708: 0xad340000  sw          $s4, 0x0($t1)
    ctx->pc = 0x28a708u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 20));
    // 0x28a70c: 0xa1130000  sb          $s3, 0x0($t0)
    ctx->pc = 0x28a70cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x28a710: 0xa0f20000  sb          $s2, 0x0($a3)
    ctx->pc = 0x28a710u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x28a714: 0xa0d10000  sb          $s1, 0x0($a2)
    ctx->pc = 0x28a714u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x28a718: 0xa0b00000  sb          $s0, 0x0($a1)
    ctx->pc = 0x28a718u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a71c: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x28a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
    // 0x28a720: 0xa0750000  sb          $s5, 0x0($v1)
    ctx->pc = 0x28a720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x28a724: 0x0  nop
    ctx->pc = 0x28a724u;
    // NOP
label_28a728:
    // 0x28a728: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28a728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a72c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28a72cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a730: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28a730u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a734: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28a734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a738: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28a738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a73c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28a73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28a740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28a744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a748: 0x3e00008  jr          $ra
    ctx->pc = 0x28A748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A748u;
        // 0x28a74c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A750u;
}
