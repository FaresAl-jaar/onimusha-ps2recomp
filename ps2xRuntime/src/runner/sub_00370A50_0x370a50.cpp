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

// Function: sub_00370A50
// Address: 0x370a50 - 0x370c04
void sub_00370A50_0x370a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370A50_0x370a50");
#endif

    switch (ctx->pc) {
        case 0x370a70u: goto label_370a70;
        case 0x370a88u: goto label_370a88;
        case 0x370abcu: goto label_370abc;
        case 0x370b18u: goto label_370b18;
        case 0x370b48u: goto label_370b48;
        case 0x370b90u: goto label_370b90;
        case 0x370bbcu: goto label_370bbc;
        case 0x370bf0u: goto label_370bf0;
        default: break;
    }

    ctx->pc = 0x370a50u;

    // 0x370a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x370a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x370a54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x370a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x370a58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x370a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370a5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x370a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x370a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x370a64: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x370a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x370a68: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x370A68u;
    SET_GPR_U32(ctx, 31, 0x370A70u);
    ctx->pc = 0x370A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A68u;
    // 0x370a6c: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x370A68u, 0x370A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A70u;
label_370a70:
    // 0x370a70: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x370a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x370a74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370a78: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x370A78u;
    {
        const bool branch_taken_0x370a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x370A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A78u;
        // 0x370a7c: 0x8c301284  lw          $s0, 0x1284($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a78) {
            ctx->pc = 0x370AC8u;
            goto label_370ac8;
        }
    }
    ctx->pc = 0x370A80u;
    // 0x370a80: 0xc0dc1dc  jal         func_370770
    ctx->pc = 0x370A80u;
    SET_GPR_U32(ctx, 31, 0x370A88u);
    ctx->pc = 0x370A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A80u;
    // 0x370a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370770u, 0x370A80u, 0x370A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A88u;
label_370a88:
    // 0x370a88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370a8c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x370a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x370a90: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x370a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x370a94: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x370a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x370a98: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x370a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x370a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370aa0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x370aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x370aa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370aa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370aac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x370aacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ab0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370ab0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ab4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x370AB4u;
    SET_GPR_U32(ctx, 31, 0x370ABCu);
    ctx->pc = 0x370AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370AB4u;
    // 0x370ab8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x370AB4u, 0x370ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370ABCu;
label_370abc:
    // 0x370abc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x370ABCu;
    {
        const bool branch_taken_0x370abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370abc) {
            ctx->pc = 0x370BF0u;
            goto label_370bf0;
        }
    }
    ctx->pc = 0x370AC4u;
    // 0x370ac4: 0x0  nop
    ctx->pc = 0x370ac4u;
    // NOP
label_370ac8:
    // 0x370ac8: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x370AC8u;
    {
        const bool branch_taken_0x370ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x370ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AC8u;
        // 0x370acc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ac8) {
            ctx->pc = 0x370BF0u;
            goto label_370bf0;
        }
    }
    ctx->pc = 0x370AD0u;
    // 0x370ad0: 0x14450047  bne         $v0, $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x370AD0u;
    {
        const bool branch_taken_0x370ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x370ad0) {
            ctx->pc = 0x370BF0u;
            goto label_370bf0;
        }
    }
    ctx->pc = 0x370AD8u;
    // 0x370ad8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x370ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x370adc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x370adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x370ae0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x370ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x370ae4: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x370AE4u;
    {
        const bool branch_taken_0x370ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x370AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AE4u;
        // 0x370ae8: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ae4) {
            ctx->pc = 0x370B20u;
            goto label_370b20;
        }
    }
    ctx->pc = 0x370AECu;
    // 0x370aec: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x370aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x370af0: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x370af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x370af4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x370af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x370af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370afc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x370afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x370b00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x370b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370b0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b10: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x370B10u;
    SET_GPR_U32(ctx, 31, 0x370B18u);
    ctx->pc = 0x370B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B10u;
    // 0x370b14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x370B10u, 0x370B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B18u;
label_370b18:
    // 0x370b18: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x370B18u;
    {
        const bool branch_taken_0x370b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370b18) {
            ctx->pc = 0x370BF0u;
            goto label_370bf0;
        }
    }
    ctx->pc = 0x370B20u;
label_370b20:
    // 0x370b20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x370b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x370b24: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x370b24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x370b28: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x370b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x370b2c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x370b2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x370b30: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x370B30u;
    {
        const bool branch_taken_0x370b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x370b30) {
            ctx->pc = 0x370B40u;
            goto label_370b40;
        }
    }
    ctx->pc = 0x370B38u;
    // 0x370b38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x370B38u;
    {
        const bool branch_taken_0x370b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B38u;
        // 0x370b3c: 0xa225001d  sb          $a1, 0x1D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b38) {
            ctx->pc = 0x370BA0u;
            goto label_370ba0;
        }
    }
    ctx->pc = 0x370B40u;
label_370b40:
    // 0x370b40: 0xc09c84c  jal         func_272130
    ctx->pc = 0x370B40u;
    SET_GPR_U32(ctx, 31, 0x370B48u);
    ctx->pc = 0x272130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272130u, 0x370B40u, 0x370B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B48u;
label_370b48:
    // 0x370b48: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x370b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x370b4c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x370b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x370b50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x370b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x370b54: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x370B54u;
    {
        const bool branch_taken_0x370b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x370b54) {
            ctx->pc = 0x370B98u;
            goto label_370b98;
        }
    }
    ctx->pc = 0x370B5Cu;
    // 0x370b5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370b60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x370b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x370b64: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x370b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x370b68: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x370b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x370b6c: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x370b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x370b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b74: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x370b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x370b78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370b7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x370b80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370b84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b88: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x370B88u;
    SET_GPR_U32(ctx, 31, 0x370B90u);
    ctx->pc = 0x370B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B88u;
    // 0x370b8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x370B88u, 0x370B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B90u;
label_370b90:
    // 0x370b90: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x370B90u;
    {
        const bool branch_taken_0x370b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370b90) {
            ctx->pc = 0x370BF0u;
            goto label_370bf0;
        }
    }
    ctx->pc = 0x370B98u;
label_370b98:
    // 0x370b98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x370b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370b9c: 0xa222001d  sb          $v0, 0x1D($s1)
    ctx->pc = 0x370b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 2));
label_370ba0:
    // 0x370ba0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x370ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x370ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x370ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ba8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x370ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x370bac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x370bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x370bb0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x370bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x370bb4: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x370BB4u;
    SET_GPR_U32(ctx, 31, 0x370BBCu);
    ctx->pc = 0x370BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370BB4u;
    // 0x370bb8: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x370BB4u, 0x370BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BBCu;
label_370bbc:
    // 0x370bbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370bc0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x370bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x370bc4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x370bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x370bc8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x370bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x370bcc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x370bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x370bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370bd4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x370bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x370bd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370bdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370be0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x370be0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370be4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370be4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370be8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x370BE8u;
    SET_GPR_U32(ctx, 31, 0x370BF0u);
    ctx->pc = 0x370BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370BE8u;
    // 0x370bec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x370BE8u, 0x370BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BF0u;
label_370bf0:
    // 0x370bf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x370bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370bf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x370bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370bf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x370bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x370BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370BFCu;
        // 0x370c00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370C04u;
}
