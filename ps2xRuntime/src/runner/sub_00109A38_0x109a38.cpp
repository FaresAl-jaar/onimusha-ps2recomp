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

// Function: sub_00109A38
// Address: 0x109a38 - 0x109d4c
void sub_00109A38_0x109a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109A38_0x109a38");
#endif

    switch (ctx->pc) {
        case 0x109b18u: goto label_109b18;
        case 0x109b2cu: goto label_109b2c;
        case 0x109b44u: goto label_109b44;
        case 0x109b5cu: goto label_109b5c;
        default: break;
    }

    ctx->pc = 0x109a38u;

    // 0x109a38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x109a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x109a3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x109a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109a40: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x109a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x109a44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x109a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a48: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x109a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x109a4c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x109a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x109a50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x109a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x109a54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109a5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109a60: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x109a60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x109a64: 0x8e450858  lw          $a1, 0x858($s2)
    ctx->pc = 0x109a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x109a68: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x109A68u;
    {
        const bool branch_taken_0x109a68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x109a68) {
            ctx->pc = 0x109A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109A68u;
            // 0x109a6c: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109A98u;
            goto label_109a98;
        }
    }
    ctx->pc = 0x109A70u;
    // 0x109a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109a74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x109a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109a78: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x109a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x109a7c: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x109a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x109a80: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x109a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x109a84: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x109a84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x109a88: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x109a88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x109a8c: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x109a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x109a90: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x109a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x109a94: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x109a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_109a98:
    // 0x109a98: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x109a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x109a9c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x109a9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x109aa0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x109AA0u;
    {
        const bool branch_taken_0x109aa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AA0u;
        // 0x109aa4: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109aa0) {
            ctx->pc = 0x109AC4u;
            goto label_109ac4;
        }
    }
    ctx->pc = 0x109AA8u;
    // 0x109aa8: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x109aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x109aac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109AACu;
    {
        const bool branch_taken_0x109aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AACu;
        // 0x109ab0: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109aac) {
            ctx->pc = 0x109AC8u;
            goto label_109ac8;
        }
    }
    ctx->pc = 0x109AB4u;
    // 0x109ab4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x109ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x109ab8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x109ab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x109abc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x109ABCu;
    {
        const bool branch_taken_0x109abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109ABCu;
        // 0x109ac0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109abc) {
            ctx->pc = 0x109AD0u;
            goto label_109ad0;
        }
    }
    ctx->pc = 0x109AC4u;
label_109ac4:
    // 0x109ac4: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x109ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_109ac8:
    // 0x109ac8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x109ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x109acc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x109accu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_109ad0:
    // 0x109ad0: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x109ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x109ad4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x109ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109ad8: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x109ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x109adc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x109adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x109ae0: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x109ae0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109ae4: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x109AE4u;
    {
        const bool branch_taken_0x109ae4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x109AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE4u;
        // 0x109ae8: 0x24160180  addiu       $s6, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ae4) {
            ctx->pc = 0x109AF8u;
            goto label_109af8;
        }
    }
    ctx->pc = 0x109AECu;
    // 0x109aec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x109aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x109af0: 0x12a2008d  beq         $s5, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x109AF0u;
    {
        const bool branch_taken_0x109af0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x109AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AF0u;
        // 0x109af4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109af0) {
            ctx->pc = 0x109D28u;
            goto label_109d28;
        }
    }
    ctx->pc = 0x109AF8u;
label_109af8:
    // 0x109af8: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x109af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x109afc: 0x2b68018  mult        $s0, $s5, $s6
    ctx->pc = 0x109afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x109b00: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x109b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x109b04: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x109b04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
    // 0x109b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b0c: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x109b0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x109b10: 0xc042fc0  jal         func_10BF00
    ctx->pc = 0x109B10u;
    SET_GPR_U32(ctx, 31, 0x109B18u);
    ctx->pc = 0x109B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B10u;
    // 0x109b14: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF00u, 0x109B10u, 0x109B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B18u;
label_109b18:
    // 0x109b18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b24: 0xc042fc4  jal         func_10BF10
    ctx->pc = 0x109B24u;
    SET_GPR_U32(ctx, 31, 0x109B2Cu);
    ctx->pc = 0x109B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B24u;
    // 0x109b28: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF10u, 0x109B24u, 0x109B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B2Cu;
label_109b2c:
    // 0x109b2c: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x109b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x109b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b3c: 0xc042fc4  jal         func_10BF10
    ctx->pc = 0x109B3Cu;
    SET_GPR_U32(ctx, 31, 0x109B44u);
    ctx->pc = 0x109B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B3Cu;
    // 0x109b40: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF10u, 0x109B3Cu, 0x109B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B44u;
label_109b44:
    // 0x109b44: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x109b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x109b48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b54: 0xc042fc4  jal         func_10BF10
    ctx->pc = 0x109B54u;
    SET_GPR_U32(ctx, 31, 0x109B5Cu);
    ctx->pc = 0x109B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B54u;
    // 0x109b58: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF10u, 0x109B54u, 0x109B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B5Cu;
label_109b5c:
    // 0x109b5c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x109b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b60: 0x8e43087c  lw          $v1, 0x87C($s2)
    ctx->pc = 0x109b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2172)));
    // 0x109b64: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x109B64u;
    {
        const bool branch_taken_0x109b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x109B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B64u;
        // 0x109b68: 0xae480114  sw          $t0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b64) {
            ctx->pc = 0x109BF0u;
            goto label_109bf0;
        }
    }
    ctx->pc = 0x109B6Cu;
    // 0x109b6c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x109b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x109b70: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x109b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x109b74: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x109b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x109b78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x109b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x109b7c: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x109b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x109b80: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x109b80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x109b84: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x109b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x109b88: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x109b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x109b8c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x109b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x109b90: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x109b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109b94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x109b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x109b98: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x109b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x109b9c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x109b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x109ba0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x109ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x109ba4: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x109ba4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x109ba8: 0x24c201ff  addiu       $v0, $a2, 0x1FF
    ctx->pc = 0x109ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x109bac: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x109bacu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x109bb0: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x109bb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x109bb4: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x109bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x109bb8: 0xae4501f8  sw          $a1, 0x1F8($s2)
    ctx->pc = 0x109bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 5));
    // 0x109bbc: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x109bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x109bc0: 0xae430260  sw          $v1, 0x260($s2)
    ctx->pc = 0x109bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    // 0x109bc4: 0xae450330  sw          $a1, 0x330($s2)
    ctx->pc = 0x109bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 5));
    // 0x109bc8: 0xae430398  sw          $v1, 0x398($s2)
    ctx->pc = 0x109bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 3));
    // 0x109bcc: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x109bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x109bd0: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x109bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x109bd4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x109bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x109bd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109bdc: 0xae450468  sw          $a1, 0x468($s2)
    ctx->pc = 0x109bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 5));
    // 0x109be0: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x109be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    // 0x109be4: 0xae440538  sw          $a0, 0x538($s2)
    ctx->pc = 0x109be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 4));
    // 0x109be8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x109BE8u;
    {
        const bool branch_taken_0x109be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BE8u;
        // 0x109bec: 0xae480400  sw          $t0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109be8) {
            ctx->pc = 0x109C58u;
            goto label_109c58;
        }
    }
    ctx->pc = 0x109BF0u;
label_109bf0:
    // 0x109bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109bf4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x109BF4u;
    {
        const bool branch_taken_0x109bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x109BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BF4u;
        // 0x109bf8: 0x143103  sra         $a2, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bf4) {
            ctx->pc = 0x109C5Cu;
            goto label_109c5c;
        }
    }
    ctx->pc = 0x109BFCu;
    // 0x109bfc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x109bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x109c00: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x109c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109c04: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x109c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x109c08: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x109c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x109c0c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x109c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x109c10: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x109c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x109c14: 0xae4601f8  sw          $a2, 0x1F8($s2)
    ctx->pc = 0x109c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 6));
    // 0x109c18: 0xae450260  sw          $a1, 0x260($s2)
    ctx->pc = 0x109c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 5));
    // 0x109c1c: 0xae460330  sw          $a2, 0x330($s2)
    ctx->pc = 0x109c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 6));
    // 0x109c20: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x109c20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x109c24: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x109c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x109c28: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x109c28u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x109c2c: 0xae450398  sw          $a1, 0x398($s2)
    ctx->pc = 0x109c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 5));
    // 0x109c30: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x109c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x109c34: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x109c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x109c38: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x109c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x109c3c: 0xae480400  sw          $t0, 0x400($s2)
    ctx->pc = 0x109c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
    // 0x109c40: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x109c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x109c44: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x109c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x109c48: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x109c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x109c4c: 0xae460468  sw          $a2, 0x468($s2)
    ctx->pc = 0x109c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 6));
    // 0x109c50: 0xae4504d0  sw          $a1, 0x4D0($s2)
    ctx->pc = 0x109c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 5));
    // 0x109c54: 0xae430538  sw          $v1, 0x538($s2)
    ctx->pc = 0x109c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 3));
label_109c58:
    // 0x109c58: 0x143103  sra         $a2, $s4, 4
    ctx->pc = 0x109c58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
label_109c5c:
    // 0x109c5c: 0x264201f8  addiu       $v0, $s2, 0x1F8
    ctx->pc = 0x109c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x109c60: 0x153903  sra         $a3, $s5, 4
    ctx->pc = 0x109c60u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 4));
    // 0x109c64: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x109c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x109c68: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x109c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x109c6c: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x109c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x109c70: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x109c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x109c74: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x109c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x109c78: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x109c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x109c7c: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x109c7cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x109c80: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x109c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x109c84: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x109c84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x109c88: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x109c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x109c8c: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x109c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x109c90: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x109c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x109c94: 0x26450330  addiu       $a1, $s2, 0x330
    ctx->pc = 0x109c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x109c98: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x109c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x109c9c: 0x26480468  addiu       $t0, $s2, 0x468
    ctx->pc = 0x109c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x109ca0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x109ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x109ca4: 0x264904d0  addiu       $t1, $s2, 0x4D0
    ctx->pc = 0x109ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x109ca8: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x109ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x109cac: 0x26430398  addiu       $v1, $s2, 0x398
    ctx->pc = 0x109cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x109cb0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x109cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x109cb4: 0x26470400  addiu       $a3, $s2, 0x400
    ctx->pc = 0x109cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x109cb8: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x109cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x109cbc: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x109cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x109cc0: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x109cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x109cc4: 0x26420538  addiu       $v0, $s2, 0x538
    ctx->pc = 0x109cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x109cc8: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x109cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x109ccc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x109cccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x109cd0: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x109cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x109cd4: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x109cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x109cd8: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x109cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x109cdc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x109cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x109ce0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x109ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x109ce4: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x109ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x109ce8: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x109ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x109cec: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x109cecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x109cf0: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x109cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x109cf4: 0xad0a0010  sw          $t2, 0x10($t0)
    ctx->pc = 0x109cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 10));
    // 0x109cf8: 0xad140004  sw          $s4, 0x4($t0)
    ctx->pc = 0x109cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 20));
    // 0x109cfc: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x109cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x109d00: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x109d00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x109d04: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x109d04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
    // 0x109d08: 0xad340004  sw          $s4, 0x4($t1)
    ctx->pc = 0x109d08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 20));
    // 0x109d0c: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x109d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x109d10: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x109d10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x109d14: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x109d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x109d18: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x109d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x109d1c: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x109d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x109d20: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x109d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x109d24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x109d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_109d28:
    // 0x109d28: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x109d28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109d2c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x109d2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109d30: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x109d30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109d34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109d34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109d38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109d3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109d44: 0x3e00008  jr          $ra
    ctx->pc = 0x109D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D44u;
        // 0x109d48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109D4Cu;
}
