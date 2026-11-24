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

// Function: sub_0014AA90
// Address: 0x14aa90 - 0x14ac1c
void sub_0014AA90_0x14aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AA90_0x14aa90");
#endif

    switch (ctx->pc) {
        case 0x14ab04u: goto label_14ab04;
        case 0x14ab4cu: goto label_14ab4c;
        case 0x14ab78u: goto label_14ab78;
        default: break;
    }

    ctx->pc = 0x14aa90u;

    // 0x14aa90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14aa94: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14aa98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14aa9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14aaa0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14aaa4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14aaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14aaa8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14aaa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14aaacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14aab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14aab4: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x14aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14aab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14aabc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14aac0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14aac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14aac8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14aacc: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x14aaccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x14aad0: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x14aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x14aad4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14AAD4u;
    {
        const bool branch_taken_0x14aad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAD4u;
        // 0x14aad8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aad4) {
            ctx->pc = 0x14AB68u;
            goto label_14ab68;
        }
    }
    ctx->pc = 0x14AADCu;
    // 0x14aadc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14aae0: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14AAE0u;
    {
        const bool branch_taken_0x14aae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14aae0) {
            ctx->pc = 0x14AB38u;
            goto label_14ab38;
        }
    }
    ctx->pc = 0x14AAE8u;
    // 0x14aae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AAE8u;
    {
        const bool branch_taken_0x14aae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aae8) {
            ctx->pc = 0x14AAF8u;
            goto label_14aaf8;
        }
    }
    ctx->pc = 0x14AAF0u;
    // 0x14aaf0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x14AAF0u;
    {
        const bool branch_taken_0x14aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aaf0) {
            ctx->pc = 0x14ABF8u;
            goto label_14abf8;
        }
    }
    ctx->pc = 0x14AAF8u;
label_14aaf8:
    // 0x14aaf8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14aaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14aafc: 0xc048566  jal         func_121598
    ctx->pc = 0x14AAFCu;
    SET_GPR_U32(ctx, 31, 0x14AB04u);
    ctx->pc = 0x14AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAFCu;
    // 0x14ab00: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14AAFCu, 0x14AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB04u;
label_14ab04:
    // 0x14ab04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AB04u;
    {
        const bool branch_taken_0x14ab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ab04) {
            ctx->pc = 0x14AB18u;
            goto label_14ab18;
        }
    }
    ctx->pc = 0x14AB0Cu;
    // 0x14ab0c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x14AB0Cu;
    {
        const bool branch_taken_0x14ab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB0Cu;
        // 0x14ab10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab0c) {
            ctx->pc = 0x14AC00u;
            goto label_14ac00;
        }
    }
    ctx->pc = 0x14AB14u;
    // 0x14ab14: 0x0  nop
    ctx->pc = 0x14ab14u;
    // NOP
label_14ab18:
    // 0x14ab18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ab1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ab20: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14ab24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14ab28: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14ab2c: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x14ab2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14ab30: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x14ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ab34: 0x0  nop
    ctx->pc = 0x14ab34u;
    // NOP
label_14ab38:
    // 0x14ab38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ab3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab40: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x14ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x14ab44: 0xc0486a2  jal         func_121A88
    ctx->pc = 0x14AB44u;
    SET_GPR_U32(ctx, 31, 0x14AB4Cu);
    ctx->pc = 0x14AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB44u;
    // 0x14ab48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121A88u, 0x14AB44u, 0x14AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB4Cu;
label_14ab4c:
    // 0x14ab4c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x14AB4Cu;
    {
        const bool branch_taken_0x14ab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ab4c) {
            ctx->pc = 0x14ABF8u;
            goto label_14abf8;
        }
    }
    ctx->pc = 0x14AB54u;
    // 0x14ab54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ab58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ab5c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x14AB5Cu;
    {
        const bool branch_taken_0x14ab5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB5Cu;
        // 0x14ab60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab5c) {
            ctx->pc = 0x14ABF8u;
            goto label_14abf8;
        }
    }
    ctx->pc = 0x14AB64u;
    // 0x14ab64: 0x0  nop
    ctx->pc = 0x14ab64u;
    // NOP
label_14ab68:
    // 0x14ab68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ab6c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14ab70: 0xc048566  jal         func_121598
    ctx->pc = 0x14AB70u;
    SET_GPR_U32(ctx, 31, 0x14AB78u);
    ctx->pc = 0x14AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB70u;
    // 0x14ab74: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14AB70u, 0x14AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB78u;
label_14ab78:
    // 0x14ab78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ab7c: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x14AB7Cu;
    {
        const bool branch_taken_0x14ab7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ab7c) {
            ctx->pc = 0x14ABF8u;
            goto label_14abf8;
        }
    }
    ctx->pc = 0x14AB84u;
    // 0x14ab84: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14ab88: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x14ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x14ab8c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14AB8Cu;
    {
        const bool branch_taken_0x14ab8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB8Cu;
        // 0x14ab90: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab8c) {
            ctx->pc = 0x14ABC8u;
            goto label_14abc8;
        }
    }
    ctx->pc = 0x14AB94u;
    // 0x14ab94: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14AB94u;
    {
        const bool branch_taken_0x14ab94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ab94) {
            ctx->pc = 0x14ABB8u;
            goto label_14abb8;
        }
    }
    ctx->pc = 0x14AB9Cu;
    // 0x14ab9c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x14aba0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ABA0u;
    {
        const bool branch_taken_0x14aba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14aba0) {
            ctx->pc = 0x14ABB8u;
            goto label_14abb8;
        }
    }
    ctx->pc = 0x14ABA8u;
    // 0x14aba8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ABA8u;
    {
        const bool branch_taken_0x14aba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aba8) {
            ctx->pc = 0x14ABB8u;
            goto label_14abb8;
        }
    }
    ctx->pc = 0x14ABB0u;
    // 0x14abb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14ABB0u;
    {
        const bool branch_taken_0x14abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14abb0) {
            ctx->pc = 0x14ABC8u;
            goto label_14abc8;
        }
    }
    ctx->pc = 0x14ABB8u;
label_14abb8:
    // 0x14abb8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14abbc: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14abbcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14abc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14ABC0u;
    {
        const bool branch_taken_0x14abc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABC0u;
        // 0x14abc4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abc0) {
            ctx->pc = 0x14AC00u;
            goto label_14ac00;
        }
    }
    ctx->pc = 0x14ABC8u;
label_14abc8:
    // 0x14abc8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14abc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14abcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14ABCCu;
    {
        const bool branch_taken_0x14abcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABCCu;
        // 0x14abd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abcc) {
            ctx->pc = 0x14ABE8u;
            goto label_14abe8;
        }
    }
    ctx->pc = 0x14ABD4u;
    // 0x14abd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14abd8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14abd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14abdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14abe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14ABE0u;
    {
        const bool branch_taken_0x14abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABE0u;
        // 0x14abe4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abe0) {
            ctx->pc = 0x14ABF8u;
            goto label_14abf8;
        }
    }
    ctx->pc = 0x14ABE8u;
label_14abe8:
    // 0x14abe8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14abec: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14abecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14abf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14ABF0u;
    {
        const bool branch_taken_0x14abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABF0u;
        // 0x14abf4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abf0) {
            ctx->pc = 0x14AC00u;
            goto label_14ac00;
        }
    }
    ctx->pc = 0x14ABF8u;
label_14abf8:
    // 0x14abf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14abfc: 0x0  nop
    ctx->pc = 0x14abfcu;
    // NOP
label_14ac00:
    // 0x14ac00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14ac00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ac04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ac04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ac08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ac08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ac0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ac0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ac10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ac10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ac14: 0x3e00008  jr          $ra
    ctx->pc = 0x14AC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC14u;
        // 0x14ac18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AC1Cu;
}
