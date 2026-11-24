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

// Function: sub_0014A5C0
// Address: 0x14a5c0 - 0x14a744
void sub_0014A5C0_0x14a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A5C0_0x14a5c0");
#endif

    switch (ctx->pc) {
        case 0x14a624u: goto label_14a624;
        case 0x14a668u: goto label_14a668;
        case 0x14a690u: goto label_14a690;
        default: break;
    }

    ctx->pc = 0x14a5c0u;

    // 0x14a5c0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14a5c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a5c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a5c8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x14a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a5cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14a5d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a5d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a5d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a5e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a5e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a5e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a5ec: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x14a5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x14a5f0: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x14a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x14a5f4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14A5F4u;
    {
        const bool branch_taken_0x14a5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5F4u;
        // 0x14a5f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5f4) {
            ctx->pc = 0x14A680u;
            goto label_14a680;
        }
    }
    ctx->pc = 0x14A5FCu;
    // 0x14a5fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a600: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14A600u;
    {
        const bool branch_taken_0x14a600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14a600) {
            ctx->pc = 0x14A658u;
            goto label_14a658;
        }
    }
    ctx->pc = 0x14A608u;
    // 0x14a608: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A608u;
    {
        const bool branch_taken_0x14a608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a608) {
            ctx->pc = 0x14A618u;
            goto label_14a618;
        }
    }
    ctx->pc = 0x14A610u;
    // 0x14a610: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x14A610u;
    {
        const bool branch_taken_0x14a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a610) {
            ctx->pc = 0x14A728u;
            goto label_14a728;
        }
    }
    ctx->pc = 0x14A618u;
label_14a618:
    // 0x14a618: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a61c: 0xc048566  jal         func_121598
    ctx->pc = 0x14A61Cu;
    SET_GPR_U32(ctx, 31, 0x14A624u);
    ctx->pc = 0x14A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A61Cu;
    // 0x14a620: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A61Cu, 0x14A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A624u;
label_14a624:
    // 0x14a624: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A624u;
    {
        const bool branch_taken_0x14a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a624) {
            ctx->pc = 0x14A638u;
            goto label_14a638;
        }
    }
    ctx->pc = 0x14A62Cu;
    // 0x14a62c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x14A62Cu;
    {
        const bool branch_taken_0x14a62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A62Cu;
        // 0x14a630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a62c) {
            ctx->pc = 0x14A730u;
            goto label_14a730;
        }
    }
    ctx->pc = 0x14A634u;
    // 0x14a634: 0x0  nop
    ctx->pc = 0x14a634u;
    // NOP
label_14a638:
    // 0x14a638: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a63c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a640: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a644: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a648: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14a648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14a64c: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x14a64cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a650: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x14a650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a654: 0x0  nop
    ctx->pc = 0x14a654u;
    // NOP
label_14a658:
    // 0x14a658: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x14a658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14a65c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x14a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x14a660: 0xc0484c2  jal         func_121308
    ctx->pc = 0x14A660u;
    SET_GPR_U32(ctx, 31, 0x14A668u);
    ctx->pc = 0x14A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A660u;
    // 0x14a664: 0x8e26001c  lw          $a2, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121308u, 0x14A660u, 0x14A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A668u;
label_14a668:
    // 0x14a668: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x14A668u;
    {
        const bool branch_taken_0x14a668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a668) {
            ctx->pc = 0x14A728u;
            goto label_14a728;
        }
    }
    ctx->pc = 0x14A670u;
    // 0x14a670: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a678: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x14A678u;
    {
        const bool branch_taken_0x14a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A678u;
        // 0x14a67c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a678) {
            ctx->pc = 0x14A728u;
            goto label_14a728;
        }
    }
    ctx->pc = 0x14A680u;
label_14a680:
    // 0x14a680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a684: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a688: 0xc048566  jal         func_121598
    ctx->pc = 0x14A688u;
    SET_GPR_U32(ctx, 31, 0x14A690u);
    ctx->pc = 0x14A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A688u;
    // 0x14a68c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A688u, 0x14A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A690u;
label_14a690:
    // 0x14a690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a694: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x14A694u;
    {
        const bool branch_taken_0x14a694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a694) {
            ctx->pc = 0x14A728u;
            goto label_14a728;
        }
    }
    ctx->pc = 0x14A69Cu;
    // 0x14a69c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a6a0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A6A0u;
    {
        const bool branch_taken_0x14a6a0 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x14a6a0) {
            ctx->pc = 0x14A6B8u;
            goto label_14a6b8;
        }
    }
    ctx->pc = 0x14A6A8u;
    // 0x14a6a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a6ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x14A6B0u;
    {
        const bool branch_taken_0x14a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6B0u;
        // 0x14a6b4: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6b0) {
            ctx->pc = 0x14A730u;
            goto label_14a730;
        }
    }
    ctx->pc = 0x14A6B8u;
label_14a6b8:
    // 0x14a6b8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x14a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x14a6bc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A6BCu;
    {
        const bool branch_taken_0x14a6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6BCu;
        // 0x14a6c0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6bc) {
            ctx->pc = 0x14A6F8u;
            goto label_14a6f8;
        }
    }
    ctx->pc = 0x14A6C4u;
    // 0x14a6c4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14A6C4u;
    {
        const bool branch_taken_0x14a6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a6c4) {
            ctx->pc = 0x14A6F8u;
            goto label_14a6f8;
        }
    }
    ctx->pc = 0x14A6CCu;
    // 0x14a6cc: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x14a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x14a6d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A6D0u;
    {
        const bool branch_taken_0x14a6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6D0u;
        // 0x14a6d4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6d0) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A6D8u;
    // 0x14a6d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A6D8u;
    {
        const bool branch_taken_0x14a6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a6d8) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A6E0u;
    // 0x14a6e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A6E0u;
    {
        const bool branch_taken_0x14a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a6e0) {
            ctx->pc = 0x14A6F8u;
            goto label_14a6f8;
        }
    }
    ctx->pc = 0x14A6E8u;
label_14a6e8:
    // 0x14a6e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a6ec: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x14a6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a6f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14A6F0u;
    {
        const bool branch_taken_0x14a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6F0u;
        // 0x14a6f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6f0) {
            ctx->pc = 0x14A730u;
            goto label_14a730;
        }
    }
    ctx->pc = 0x14A6F8u;
label_14a6f8:
    // 0x14a6f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x14a6f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a6fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A6FCu;
    {
        const bool branch_taken_0x14a6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6FCu;
        // 0x14a700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6fc) {
            ctx->pc = 0x14A718u;
            goto label_14a718;
        }
    }
    ctx->pc = 0x14A704u;
    // 0x14a704: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a708: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x14a708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a70c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A710u;
    {
        const bool branch_taken_0x14a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A710u;
        // 0x14a714: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a710) {
            ctx->pc = 0x14A728u;
            goto label_14a728;
        }
    }
    ctx->pc = 0x14A718u;
label_14a718:
    // 0x14a718: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a71c: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x14a71cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a720: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A720u;
    {
        const bool branch_taken_0x14a720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A720u;
        // 0x14a724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a720) {
            ctx->pc = 0x14A730u;
            goto label_14a730;
        }
    }
    ctx->pc = 0x14A728u;
label_14a728:
    // 0x14a728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a72c: 0x0  nop
    ctx->pc = 0x14a72cu;
    // NOP
label_14a730:
    // 0x14a730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14a730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a73c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A73Cu;
        // 0x14a740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A744u;
}
