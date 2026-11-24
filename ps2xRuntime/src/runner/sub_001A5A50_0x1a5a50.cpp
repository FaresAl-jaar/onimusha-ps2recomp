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

// Function: sub_001A5A50
// Address: 0x1a5a50 - 0x1a5f4c
void sub_001A5A50_0x1a5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5A50_0x1a5a50");
#endif

    switch (ctx->pc) {
        case 0x1a5a98u: goto label_1a5a98;
        case 0x1a5aa8u: goto label_1a5aa8;
        case 0x1a5ab4u: goto label_1a5ab4;
        case 0x1a5ad0u: goto label_1a5ad0;
        case 0x1a5b20u: goto label_1a5b20;
        case 0x1a5b54u: goto label_1a5b54;
        case 0x1a5b6cu: goto label_1a5b6c;
        case 0x1a5b84u: goto label_1a5b84;
        case 0x1a5b9cu: goto label_1a5b9c;
        case 0x1a5bb4u: goto label_1a5bb4;
        case 0x1a5bccu: goto label_1a5bcc;
        case 0x1a5be4u: goto label_1a5be4;
        case 0x1a5bfcu: goto label_1a5bfc;
        case 0x1a5c14u: goto label_1a5c14;
        case 0x1a5c2cu: goto label_1a5c2c;
        case 0x1a5c44u: goto label_1a5c44;
        case 0x1a5c5cu: goto label_1a5c5c;
        case 0x1a5c74u: goto label_1a5c74;
        case 0x1a5c8cu: goto label_1a5c8c;
        case 0x1a5ca4u: goto label_1a5ca4;
        case 0x1a5cbcu: goto label_1a5cbc;
        case 0x1a5cd4u: goto label_1a5cd4;
        case 0x1a5cecu: goto label_1a5cec;
        case 0x1a5d04u: goto label_1a5d04;
        case 0x1a5d1cu: goto label_1a5d1c;
        case 0x1a5d34u: goto label_1a5d34;
        case 0x1a5d4cu: goto label_1a5d4c;
        case 0x1a5d68u: goto label_1a5d68;
        case 0x1a5d8cu: goto label_1a5d8c;
        case 0x1a5e0cu: goto label_1a5e0c;
        case 0x1a5e24u: goto label_1a5e24;
        case 0x1a5e3cu: goto label_1a5e3c;
        case 0x1a5e54u: goto label_1a5e54;
        case 0x1a5e6cu: goto label_1a5e6c;
        case 0x1a5e84u: goto label_1a5e84;
        case 0x1a5e9cu: goto label_1a5e9c;
        case 0x1a5eb4u: goto label_1a5eb4;
        case 0x1a5eccu: goto label_1a5ecc;
        case 0x1a5ee4u: goto label_1a5ee4;
        case 0x1a5ef0u: goto label_1a5ef0;
        case 0x1a5f0cu: goto label_1a5f0c;
        case 0x1a5f28u: goto label_1a5f28;
        default: break;
    }

    ctx->pc = 0x1a5a50u;

    // 0x1a5a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5a54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a5a58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5a64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a68: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1a5a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a5a6c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1a5a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1a5a70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5A70u;
    {
        const bool branch_taken_0x1a5a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A70u;
        // 0x1a5a74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a70) {
            ctx->pc = 0x1A5AA8u;
            goto label_1a5aa8;
        }
    }
    ctx->pc = 0x1A5A78u;
    // 0x1a5a78: 0x92227846  lbu         $v0, 0x7846($s1)
    ctx->pc = 0x1a5a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30790)));
    // 0x1a5a7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5A7Cu;
    {
        const bool branch_taken_0x1a5a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a7c) {
            ctx->pc = 0x1A5AA0u;
            goto label_1a5aa0;
        }
    }
    ctx->pc = 0x1A5A84u;
    // 0x1a5a84: 0x92227844  lbu         $v0, 0x7844($s1)
    ctx->pc = 0x1a5a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30788)));
    // 0x1a5a88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5A88u;
    {
        const bool branch_taken_0x1a5a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A88u;
        // 0x1a5a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a88) {
            ctx->pc = 0x1A5AA8u;
            goto label_1a5aa8;
        }
    }
    ctx->pc = 0x1A5A90u;
    // 0x1a5a90: 0xc069da8  jal         func_1A76A0
    ctx->pc = 0x1A5A90u;
    SET_GPR_U32(ctx, 31, 0x1A5A98u);
    ctx->pc = 0x1A5A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A90u;
    // 0x1a5a94: 0xa2257844  sb          $a1, 0x7844($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 30788), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76A0u, 0x1A5A90u, 0x1A5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A98u;
label_1a5a98:
    // 0x1a5a98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5A98u;
    {
        const bool branch_taken_0x1a5a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a98) {
            ctx->pc = 0x1A5AA8u;
            goto label_1a5aa8;
        }
    }
    ctx->pc = 0x1A5AA0u;
label_1a5aa0:
    // 0x1a5aa0: 0xc069da8  jal         func_1A76A0
    ctx->pc = 0x1A5AA0u;
    SET_GPR_U32(ctx, 31, 0x1A5AA8u);
    ctx->pc = 0x1A5AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5AA0u;
    // 0x1a5aa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76A0u, 0x1A5AA0u, 0x1A5AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AA8u;
label_1a5aa8:
    // 0x1a5aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5aac: 0xc069630  jal         func_1A58C0
    ctx->pc = 0x1A5AACu;
    SET_GPR_U32(ctx, 31, 0x1A5AB4u);
    ctx->pc = 0x1A5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5AACu;
    // 0x1a5ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A58C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A58C0u, 0x1A5AACu, 0x1A5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AB4u;
label_1a5ab4:
    // 0x1a5ab4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ab8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a5abc: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5ABCu;
    {
        const bool branch_taken_0x1a5abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1a5abc) {
            ctx->pc = 0x1A5AD8u;
            goto label_1a5ad8;
        }
    }
    ctx->pc = 0x1A5AC4u;
    // 0x1a5ac4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1a5ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5ac8: 0xc069d18  jal         func_1A7460
    ctx->pc = 0x1A5AC8u;
    SET_GPR_U32(ctx, 31, 0x1A5AD0u);
    ctx->pc = 0x1A5ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5AC8u;
    // 0x1a5acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7460u, 0x1A5AC8u, 0x1A5AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AD0u;
label_1a5ad0:
    // 0x1a5ad0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a5ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a5ad4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1a5ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_1a5ad8:
    // 0x1a5ad8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1a5ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5adc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5ADCu;
    {
        const bool branch_taken_0x1a5adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5adc) {
            ctx->pc = 0x1A5B08u;
            goto label_1a5b08;
        }
    }
    ctx->pc = 0x1A5AE4u;
    // 0x1a5ae4: 0x10a000a4  beqz        $a1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1A5AE4u;
    {
        const bool branch_taken_0x1a5ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ae4) {
            ctx->pc = 0x1A5D78u;
            goto label_1a5d78;
        }
    }
    ctx->pc = 0x1A5AECu;
    // 0x1a5aec: 0x8e227848  lw          $v0, 0x7848($s1)
    ctx->pc = 0x1a5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30792)));
    // 0x1a5af0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5af4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a5af8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5afc: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x1A5AFCu;
    {
        const bool branch_taken_0x1a5afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5afc) {
            ctx->pc = 0x1A5D78u;
            goto label_1a5d78;
        }
    }
    ctx->pc = 0x1A5B04u;
    // 0x1a5b04: 0x0  nop
    ctx->pc = 0x1a5b04u;
    // NOP
label_1a5b08:
    // 0x1a5b08: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a5b08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a5b0c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1a5b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1a5b10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5B10u;
    {
        const bool branch_taken_0x1a5b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B10u;
        // 0x1a5b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b10) {
            ctx->pc = 0x1A5B20u;
            goto label_1a5b20;
        }
    }
    ctx->pc = 0x1A5B18u;
    // 0x1a5b18: 0xc069c84  jal         func_1A7210
    ctx->pc = 0x1A5B18u;
    SET_GPR_U32(ctx, 31, 0x1A5B20u);
    ctx->pc = 0x1A7210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7210u, 0x1A5B18u, 0x1A5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B20u;
label_1a5b20:
    // 0x1a5b20: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a5b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5b24: 0x2c410017  sltiu       $at, $v0, 0x17
    ctx->pc = 0x1a5b24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1a5b28: 0x10200089  beqz        $at, . + 4 + (0x89 << 2)
    ctx->pc = 0x1A5B28u;
    {
        const bool branch_taken_0x1a5b28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B28u;
        // 0x1a5b2c: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b28) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5B30u;
    // 0x1a5b30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5b34: 0x24635920  addiu       $v1, $v1, 0x5920
    ctx->pc = 0x1a5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22816));
    // 0x1a5b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5b3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5b40: 0x400008  jr          $v0
    ctx->pc = 0x1A5B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5B48u: goto label_1a5b48;
            case 0x1A5B60u: goto label_1a5b60;
            case 0x1A5B78u: goto label_1a5b78;
            case 0x1A5B90u: goto label_1a5b90;
            case 0x1A5BA8u: goto label_1a5ba8;
            case 0x1A5BC0u: goto label_1a5bc0;
            case 0x1A5BD8u: goto label_1a5bd8;
            case 0x1A5BF0u: goto label_1a5bf0;
            case 0x1A5C08u: goto label_1a5c08;
            case 0x1A5C20u: goto label_1a5c20;
            case 0x1A5C38u: goto label_1a5c38;
            case 0x1A5C50u: goto label_1a5c50;
            case 0x1A5C68u: goto label_1a5c68;
            case 0x1A5C80u: goto label_1a5c80;
            case 0x1A5C98u: goto label_1a5c98;
            case 0x1A5CB0u: goto label_1a5cb0;
            case 0x1A5CC8u: goto label_1a5cc8;
            case 0x1A5CE0u: goto label_1a5ce0;
            case 0x1A5CF8u: goto label_1a5cf8;
            case 0x1A5D10u: goto label_1a5d10;
            case 0x1A5D28u: goto label_1a5d28;
            case 0x1A5D40u: goto label_1a5d40;
            case 0x1A5D50u: goto label_1a5d50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5B40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A5B48u;
label_1a5b48:
    // 0x1a5b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b4c: 0xc069df8  jal         func_1A77E0
    ctx->pc = 0x1A5B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A5B54u);
    ctx->pc = 0x1A5B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B4Cu;
    // 0x1a5b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77E0u, 0x1A5B4Cu, 0x1A5B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B54u;
label_1a5b54:
    // 0x1a5b54: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1A5B54u;
    {
        const bool branch_taken_0x1a5b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b54) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5B5Cu;
    // 0x1a5b5c: 0x0  nop
    ctx->pc = 0x1a5b5cu;
    // NOP
label_1a5b60:
    // 0x1a5b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b64: 0xc06cd78  jal         func_1B35E0
    ctx->pc = 0x1A5B64u;
    SET_GPR_U32(ctx, 31, 0x1A5B6Cu);
    ctx->pc = 0x1A5B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B64u;
    // 0x1a5b68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B35E0u, 0x1A5B64u, 0x1A5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B6Cu;
label_1a5b6c:
    // 0x1a5b6c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1A5B6Cu;
    {
        const bool branch_taken_0x1a5b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b6c) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5B74u;
    // 0x1a5b74: 0x0  nop
    ctx->pc = 0x1a5b74u;
    // NOP
label_1a5b78:
    // 0x1a5b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b7c: 0xc06c4cc  jal         func_1B1330
    ctx->pc = 0x1A5B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5B84u);
    ctx->pc = 0x1A5B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B7Cu;
    // 0x1a5b80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1330u, 0x1A5B7Cu, 0x1A5B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B84u;
label_1a5b84:
    // 0x1a5b84: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1A5B84u;
    {
        const bool branch_taken_0x1a5b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b84) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5B8Cu;
    // 0x1a5b8c: 0x0  nop
    ctx->pc = 0x1a5b8cu;
    // NOP
label_1a5b90:
    // 0x1a5b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b94: 0xc06ea18  jal         func_1BA860
    ctx->pc = 0x1A5B94u;
    SET_GPR_U32(ctx, 31, 0x1A5B9Cu);
    ctx->pc = 0x1A5B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B94u;
    // 0x1a5b98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA860u, 0x1A5B94u, 0x1A5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B9Cu;
label_1a5b9c:
    // 0x1a5b9c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1A5B9Cu;
    {
        const bool branch_taken_0x1a5b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b9c) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5BA4u;
    // 0x1a5ba4: 0x0  nop
    ctx->pc = 0x1a5ba4u;
    // NOP
label_1a5ba8:
    // 0x1a5ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5bac: 0xc06ee2c  jal         func_1BB8B0
    ctx->pc = 0x1A5BACu;
    SET_GPR_U32(ctx, 31, 0x1A5BB4u);
    ctx->pc = 0x1A5BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BACu;
    // 0x1a5bb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8B0u, 0x1A5BACu, 0x1A5BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BB4u;
label_1a5bb4:
    // 0x1a5bb4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1A5BB4u;
    {
        const bool branch_taken_0x1a5bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bb4) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5BBCu;
    // 0x1a5bbc: 0x0  nop
    ctx->pc = 0x1a5bbcu;
    // NOP
label_1a5bc0:
    // 0x1a5bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5bc4: 0xc06c36c  jal         func_1B0DB0
    ctx->pc = 0x1A5BC4u;
    SET_GPR_U32(ctx, 31, 0x1A5BCCu);
    ctx->pc = 0x1A5BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BC4u;
    // 0x1a5bc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0DB0u, 0x1A5BC4u, 0x1A5BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BCCu;
label_1a5bcc:
    // 0x1a5bcc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1A5BCCu;
    {
        const bool branch_taken_0x1a5bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bcc) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5BD4u;
    // 0x1a5bd4: 0x0  nop
    ctx->pc = 0x1a5bd4u;
    // NOP
label_1a5bd8:
    // 0x1a5bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5bdc: 0xc06b368  jal         func_1ACDA0
    ctx->pc = 0x1A5BDCu;
    SET_GPR_U32(ctx, 31, 0x1A5BE4u);
    ctx->pc = 0x1A5BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BDCu;
    // 0x1a5be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACDA0u, 0x1A5BDCu, 0x1A5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BE4u;
label_1a5be4:
    // 0x1a5be4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1A5BE4u;
    {
        const bool branch_taken_0x1a5be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5be4) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5BECu;
    // 0x1a5bec: 0x0  nop
    ctx->pc = 0x1a5becu;
    // NOP
label_1a5bf0:
    // 0x1a5bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5bf4: 0xc069e38  jal         func_1A78E0
    ctx->pc = 0x1A5BF4u;
    SET_GPR_U32(ctx, 31, 0x1A5BFCu);
    ctx->pc = 0x1A5BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BF4u;
    // 0x1a5bf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78E0u, 0x1A5BF4u, 0x1A5BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BFCu;
label_1a5bfc:
    // 0x1a5bfc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A5BFCu;
    {
        const bool branch_taken_0x1a5bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bfc) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5C04u;
    // 0x1a5c04: 0x0  nop
    ctx->pc = 0x1a5c04u;
    // NOP
label_1a5c08:
    // 0x1a5c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c0c: 0xc06a2c4  jal         func_1A8B10
    ctx->pc = 0x1A5C0Cu;
    SET_GPR_U32(ctx, 31, 0x1A5C14u);
    ctx->pc = 0x1A5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C0Cu;
    // 0x1a5c10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B10u, 0x1A5C0Cu, 0x1A5C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C14u;
label_1a5c14:
    // 0x1a5c14: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1A5C14u;
    {
        const bool branch_taken_0x1a5c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c14) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5C1Cu;
    // 0x1a5c1c: 0x0  nop
    ctx->pc = 0x1a5c1cu;
    // NOP
label_1a5c20:
    // 0x1a5c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c24: 0xc06d464  jal         func_1B5190
    ctx->pc = 0x1A5C24u;
    SET_GPR_U32(ctx, 31, 0x1A5C2Cu);
    ctx->pc = 0x1A5C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C24u;
    // 0x1a5c28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5190u, 0x1A5C24u, 0x1A5C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C2Cu;
label_1a5c2c:
    // 0x1a5c2c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1A5C2Cu;
    {
        const bool branch_taken_0x1a5c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c2c) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5C34u;
    // 0x1a5c34: 0x0  nop
    ctx->pc = 0x1a5c34u;
    // NOP
label_1a5c38:
    // 0x1a5c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c3c: 0xc06e090  jal         func_1B8240
    ctx->pc = 0x1A5C3Cu;
    SET_GPR_U32(ctx, 31, 0x1A5C44u);
    ctx->pc = 0x1A5C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C3Cu;
    // 0x1a5c40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8240u, 0x1A5C3Cu, 0x1A5C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C44u;
label_1a5c44:
    // 0x1a5c44: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1A5C44u;
    {
        const bool branch_taken_0x1a5c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c44) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5C4Cu;
    // 0x1a5c4c: 0x0  nop
    ctx->pc = 0x1a5c4cu;
    // NOP
label_1a5c50:
    // 0x1a5c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c54: 0xc06e348  jal         func_1B8D20
    ctx->pc = 0x1A5C54u;
    SET_GPR_U32(ctx, 31, 0x1A5C5Cu);
    ctx->pc = 0x1A5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C54u;
    // 0x1a5c58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8D20u, 0x1A5C54u, 0x1A5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C5Cu;
label_1a5c5c:
    // 0x1a5c5c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1A5C5Cu;
    {
        const bool branch_taken_0x1a5c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c5c) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5C64u;
    // 0x1a5c64: 0x0  nop
    ctx->pc = 0x1a5c64u;
    // NOP
label_1a5c68:
    // 0x1a5c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c6c: 0xc06b980  jal         func_1AE600
    ctx->pc = 0x1A5C6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5C74u);
    ctx->pc = 0x1A5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C6Cu;
    // 0x1a5c70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE600u, 0x1A5C6Cu, 0x1A5C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C74u;
label_1a5c74:
    // 0x1a5c74: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A5C74u;
    {
        const bool branch_taken_0x1a5c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c74) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5C7Cu;
    // 0x1a5c7c: 0x0  nop
    ctx->pc = 0x1a5c7cu;
    // NOP
label_1a5c80:
    // 0x1a5c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c84: 0xc06be08  jal         func_1AF820
    ctx->pc = 0x1A5C84u;
    SET_GPR_U32(ctx, 31, 0x1A5C8Cu);
    ctx->pc = 0x1A5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C84u;
    // 0x1a5c88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF820u, 0x1A5C84u, 0x1A5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C8Cu;
label_1a5c8c:
    // 0x1a5c8c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1A5C8Cu;
    {
        const bool branch_taken_0x1a5c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c8c) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5C94u;
    // 0x1a5c94: 0x0  nop
    ctx->pc = 0x1a5c94u;
    // NOP
label_1a5c98:
    // 0x1a5c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c9c: 0xc06a6a0  jal         func_1A9A80
    ctx->pc = 0x1A5C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A5CA4u);
    ctx->pc = 0x1A5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C9Cu;
    // 0x1a5ca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9A80u, 0x1A5C9Cu, 0x1A5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CA4u;
label_1a5ca4:
    // 0x1a5ca4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A5CA4u;
    {
        const bool branch_taken_0x1a5ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ca4) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5CACu;
    // 0x1a5cac: 0x0  nop
    ctx->pc = 0x1a5cacu;
    // NOP
label_1a5cb0:
    // 0x1a5cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cb4: 0xc06f20c  jal         func_1BC830
    ctx->pc = 0x1A5CB4u;
    SET_GPR_U32(ctx, 31, 0x1A5CBCu);
    ctx->pc = 0x1A5CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CB4u;
    // 0x1a5cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC830u, 0x1A5CB4u, 0x1A5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CBCu;
label_1a5cbc:
    // 0x1a5cbc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A5CBCu;
    {
        const bool branch_taken_0x1a5cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5cbc) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5CC4u;
    // 0x1a5cc4: 0x0  nop
    ctx->pc = 0x1a5cc4u;
    // NOP
label_1a5cc8:
    // 0x1a5cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ccc: 0xc06c988  jal         func_1B2620
    ctx->pc = 0x1A5CCCu;
    SET_GPR_U32(ctx, 31, 0x1A5CD4u);
    ctx->pc = 0x1A5CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CCCu;
    // 0x1a5cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2620u, 0x1A5CCCu, 0x1A5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CD4u;
label_1a5cd4:
    // 0x1a5cd4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A5CD4u;
    {
        const bool branch_taken_0x1a5cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5cd4) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5CDCu;
    // 0x1a5cdc: 0x0  nop
    ctx->pc = 0x1a5cdcu;
    // NOP
label_1a5ce0:
    // 0x1a5ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ce4: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1A5CE4u;
    SET_GPR_U32(ctx, 31, 0x1A5CECu);
    ctx->pc = 0x1A5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CE4u;
    // 0x1a5ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1A5CE4u, 0x1A5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CECu;
label_1a5cec:
    // 0x1a5cec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5CECu;
    {
        const bool branch_taken_0x1a5cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5cec) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5CF4u;
    // 0x1a5cf4: 0x0  nop
    ctx->pc = 0x1a5cf4u;
    // NOP
label_1a5cf8:
    // 0x1a5cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cfc: 0xc06db20  jal         func_1B6C80
    ctx->pc = 0x1A5CFCu;
    SET_GPR_U32(ctx, 31, 0x1A5D04u);
    ctx->pc = 0x1A5D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CFCu;
    // 0x1a5d00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C80u, 0x1A5CFCu, 0x1A5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D04u;
label_1a5d04:
    // 0x1a5d04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5D04u;
    {
        const bool branch_taken_0x1a5d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d04) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5D0Cu;
    // 0x1a5d0c: 0x0  nop
    ctx->pc = 0x1a5d0cu;
    // NOP
label_1a5d10:
    // 0x1a5d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d14: 0xc06f658  jal         func_1BD960
    ctx->pc = 0x1A5D14u;
    SET_GPR_U32(ctx, 31, 0x1A5D1Cu);
    ctx->pc = 0x1A5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D14u;
    // 0x1a5d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD960u, 0x1A5D14u, 0x1A5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D1Cu;
label_1a5d1c:
    // 0x1a5d1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A5D1Cu;
    {
        const bool branch_taken_0x1a5d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d1c) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5D24u;
    // 0x1a5d24: 0x0  nop
    ctx->pc = 0x1a5d24u;
    // NOP
label_1a5d28:
    // 0x1a5d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d2c: 0xc06f908  jal         func_1BE420
    ctx->pc = 0x1A5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D34u);
    ctx->pc = 0x1A5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D2Cu;
    // 0x1a5d30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE420u, 0x1A5D2Cu, 0x1A5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D34u;
label_1a5d34:
    // 0x1a5d34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5D34u;
    {
        const bool branch_taken_0x1a5d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d34) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5D3Cu;
    // 0x1a5d3c: 0x0  nop
    ctx->pc = 0x1a5d3cu;
    // NOP
label_1a5d40:
    // 0x1a5d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d44: 0xc06aa90  jal         func_1AAA40
    ctx->pc = 0x1A5D44u;
    SET_GPR_U32(ctx, 31, 0x1A5D4Cu);
    ctx->pc = 0x1A5D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D44u;
    // 0x1a5d48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAA40u, 0x1A5D44u, 0x1A5D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D4Cu;
label_1a5d4c:
    // 0x1a5d4c: 0x0  nop
    ctx->pc = 0x1a5d4cu;
    // NOP
label_1a5d50:
    // 0x1a5d50: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a5d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a5d54: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1a5d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1a5d58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5D58u;
    {
        const bool branch_taken_0x1a5d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D58u;
        // 0x1a5d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d58) {
            ctx->pc = 0x1A5D70u;
            goto label_1a5d70;
        }
    }
    ctx->pc = 0x1A5D60u;
    // 0x1a5d60: 0xc069cbc  jal         func_1A72F0
    ctx->pc = 0x1A5D60u;
    SET_GPR_U32(ctx, 31, 0x1A5D68u);
    ctx->pc = 0x1A72F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72F0u, 0x1A5D60u, 0x1A5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D68u;
label_1a5d68:
    // 0x1a5d68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5D68u;
    {
        const bool branch_taken_0x1a5d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D68u;
        // 0x1a5d6c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d68) {
            ctx->pc = 0x1A5D78u;
            goto label_1a5d78;
        }
    }
    ctx->pc = 0x1A5D70u;
label_1a5d70:
    // 0x1a5d70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a5d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a5d74: 0x0  nop
    ctx->pc = 0x1a5d74u;
    // NOP
label_1a5d78:
    // 0x1a5d78: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1a5d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5d7c: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1A5D7Cu;
    {
        const bool branch_taken_0x1a5d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D7Cu;
        // 0x1a5d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d7c) {
            ctx->pc = 0x1A5EF0u;
            goto label_1a5ef0;
        }
    }
    ctx->pc = 0x1A5D84u;
    // 0x1a5d84: 0xc069c70  jal         func_1A71C0
    ctx->pc = 0x1A5D84u;
    SET_GPR_U32(ctx, 31, 0x1A5D8Cu);
    ctx->pc = 0x1A71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A71C0u, 0x1A5D84u, 0x1A5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D8Cu;
label_1a5d8c:
    // 0x1a5d8c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1a5d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5d90: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1a5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a5d94: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1A5D94u;
    {
        const bool branch_taken_0x1a5d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D94u;
        // 0x1a5d98: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d94) {
            ctx->pc = 0x1A5ED8u;
            goto label_1a5ed8;
        }
    }
    ctx->pc = 0x1A5D9Cu;
    // 0x1a5d9c: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A5D9Cu;
    {
        const bool branch_taken_0x1a5d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5d9c) {
            ctx->pc = 0x1A5EC0u;
            goto label_1a5ec0;
        }
    }
    ctx->pc = 0x1A5DA4u;
    // 0x1a5da4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a5da8: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1A5DA8u;
    {
        const bool branch_taken_0x1a5da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DA8u;
        // 0x1a5dac: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5da8) {
            ctx->pc = 0x1A5EA8u;
            goto label_1a5ea8;
        }
    }
    ctx->pc = 0x1A5DB0u;
    // 0x1a5db0: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1A5DB0u;
    {
        const bool branch_taken_0x1a5db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5db0) {
            ctx->pc = 0x1A5E90u;
            goto label_1a5e90;
        }
    }
    ctx->pc = 0x1A5DB8u;
    // 0x1a5db8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1a5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1a5dbc: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A5DBCu;
    {
        const bool branch_taken_0x1a5dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DBCu;
        // 0x1a5dc0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5dbc) {
            ctx->pc = 0x1A5E78u;
            goto label_1a5e78;
        }
    }
    ctx->pc = 0x1A5DC4u;
    // 0x1a5dc4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A5DC4u;
    {
        const bool branch_taken_0x1a5dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5dc4) {
            ctx->pc = 0x1A5E60u;
            goto label_1a5e60;
        }
    }
    ctx->pc = 0x1A5DCCu;
    // 0x1a5dcc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a5dd0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A5DD0u;
    {
        const bool branch_taken_0x1a5dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DD0u;
        // 0x1a5dd4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5dd0) {
            ctx->pc = 0x1A5E48u;
            goto label_1a5e48;
        }
    }
    ctx->pc = 0x1A5DD8u;
    // 0x1a5dd8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A5DD8u;
    {
        const bool branch_taken_0x1a5dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5dd8) {
            ctx->pc = 0x1A5E30u;
            goto label_1a5e30;
        }
    }
    ctx->pc = 0x1A5DE0u;
    // 0x1a5de0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1a5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a5de4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A5DE4u;
    {
        const bool branch_taken_0x1a5de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DE4u;
        // 0x1a5de8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5de4) {
            ctx->pc = 0x1A5E18u;
            goto label_1a5e18;
        }
    }
    ctx->pc = 0x1A5DECu;
    // 0x1a5dec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5DECu;
    {
        const bool branch_taken_0x1a5dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5dec) {
            ctx->pc = 0x1A5E00u;
            goto label_1a5e00;
        }
    }
    ctx->pc = 0x1A5DF4u;
    // 0x1a5df4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1A5DF4u;
    {
        const bool branch_taken_0x1a5df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5df4) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5DFCu;
    // 0x1a5dfc: 0x0  nop
    ctx->pc = 0x1a5dfcu;
    // NOP
label_1a5e00:
    // 0x1a5e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e04: 0xc06b840  jal         func_1AE100
    ctx->pc = 0x1A5E04u;
    SET_GPR_U32(ctx, 31, 0x1A5E0Cu);
    ctx->pc = 0x1A5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E04u;
    // 0x1a5e08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE100u, 0x1A5E04u, 0x1A5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E0Cu;
label_1a5e0c:
    // 0x1a5e0c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A5E0Cu;
    {
        const bool branch_taken_0x1a5e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e0c) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5E14u;
    // 0x1a5e14: 0x0  nop
    ctx->pc = 0x1a5e14u;
    // NOP
label_1a5e18:
    // 0x1a5e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e1c: 0xc06e2c4  jal         func_1B8B10
    ctx->pc = 0x1A5E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E24u);
    ctx->pc = 0x1A5E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E1Cu;
    // 0x1a5e20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8B10u, 0x1A5E1Cu, 0x1A5E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E24u;
label_1a5e24:
    // 0x1a5e24: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1A5E24u;
    {
        const bool branch_taken_0x1a5e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e24) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5E2Cu;
    // 0x1a5e2c: 0x0  nop
    ctx->pc = 0x1a5e2cu;
    // NOP
label_1a5e30:
    // 0x1a5e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e34: 0xc06e8a4  jal         func_1BA290
    ctx->pc = 0x1A5E34u;
    SET_GPR_U32(ctx, 31, 0x1A5E3Cu);
    ctx->pc = 0x1A5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E34u;
    // 0x1a5e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA290u, 0x1A5E34u, 0x1A5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E3Cu;
label_1a5e3c:
    // 0x1a5e3c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A5E3Cu;
    {
        const bool branch_taken_0x1a5e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e3c) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5E44u;
    // 0x1a5e44: 0x0  nop
    ctx->pc = 0x1a5e44u;
    // NOP
label_1a5e48:
    // 0x1a5e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e4c: 0xc06bc78  jal         func_1AF1E0
    ctx->pc = 0x1A5E4Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E54u);
    ctx->pc = 0x1A5E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E4Cu;
    // 0x1a5e50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1E0u, 0x1A5E4Cu, 0x1A5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E54u;
label_1a5e54:
    // 0x1a5e54: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A5E54u;
    {
        const bool branch_taken_0x1a5e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e54) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5E5Cu;
    // 0x1a5e5c: 0x0  nop
    ctx->pc = 0x1a5e5cu;
    // NOP
label_1a5e60:
    // 0x1a5e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e64: 0xc06c12c  jal         func_1B04B0
    ctx->pc = 0x1A5E64u;
    SET_GPR_U32(ctx, 31, 0x1A5E6Cu);
    ctx->pc = 0x1A5E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E64u;
    // 0x1a5e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B04B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04B0u, 0x1A5E64u, 0x1A5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E6Cu;
label_1a5e6c:
    // 0x1a5e6c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A5E6Cu;
    {
        const bool branch_taken_0x1a5e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e6c) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5E74u;
    // 0x1a5e74: 0x0  nop
    ctx->pc = 0x1a5e74u;
    // NOP
label_1a5e78:
    // 0x1a5e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e7c: 0xc06cc64  jal         func_1B3190
    ctx->pc = 0x1A5E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E84u);
    ctx->pc = 0x1A5E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E7Cu;
    // 0x1a5e80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3190u, 0x1A5E7Cu, 0x1A5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E84u;
label_1a5e84:
    // 0x1a5e84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5E84u;
    {
        const bool branch_taken_0x1a5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e84) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5E8Cu;
    // 0x1a5e8c: 0x0  nop
    ctx->pc = 0x1a5e8cu;
    // NOP
label_1a5e90:
    // 0x1a5e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e94: 0xc06c984  jal         func_1B2610
    ctx->pc = 0x1A5E94u;
    SET_GPR_U32(ctx, 31, 0x1A5E9Cu);
    ctx->pc = 0x1A5E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E94u;
    // 0x1a5e98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2610u, 0x1A5E94u, 0x1A5E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E9Cu;
label_1a5e9c:
    // 0x1a5e9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5E9Cu;
    {
        const bool branch_taken_0x1a5e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e9c) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5EA4u;
    // 0x1a5ea4: 0x0  nop
    ctx->pc = 0x1a5ea4u;
    // NOP
label_1a5ea8:
    // 0x1a5ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5eac: 0xc06df20  jal         func_1B7C80
    ctx->pc = 0x1A5EACu;
    SET_GPR_U32(ctx, 31, 0x1A5EB4u);
    ctx->pc = 0x1A5EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EACu;
    // 0x1a5eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C80u, 0x1A5EACu, 0x1A5EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EB4u;
label_1a5eb4:
    // 0x1a5eb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A5EB4u;
    {
        const bool branch_taken_0x1a5eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5eb4) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5EBCu;
    // 0x1a5ebc: 0x0  nop
    ctx->pc = 0x1a5ebcu;
    // NOP
label_1a5ec0:
    // 0x1a5ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ec4: 0xc06f894  jal         func_1BE250
    ctx->pc = 0x1A5EC4u;
    SET_GPR_U32(ctx, 31, 0x1A5ECCu);
    ctx->pc = 0x1A5EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EC4u;
    // 0x1a5ec8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x1A5EC4u, 0x1A5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5ECCu;
label_1a5ecc:
    // 0x1a5ecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5ECCu;
    {
        const bool branch_taken_0x1a5ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ecc) {
            ctx->pc = 0x1A5EE8u;
            goto label_1a5ee8;
        }
    }
    ctx->pc = 0x1A5ED4u;
    // 0x1a5ed4: 0x0  nop
    ctx->pc = 0x1a5ed4u;
    // NOP
label_1a5ed8:
    // 0x1a5ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5edc: 0xc06af94  jal         func_1ABE50
    ctx->pc = 0x1A5EDCu;
    SET_GPR_U32(ctx, 31, 0x1A5EE4u);
    ctx->pc = 0x1A5EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EDCu;
    // 0x1a5ee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE50u, 0x1A5EDCu, 0x1A5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EE4u;
label_1a5ee4:
    // 0x1a5ee4: 0x0  nop
    ctx->pc = 0x1a5ee4u;
    // NOP
label_1a5ee8:
    // 0x1a5ee8: 0xc069c80  jal         func_1A7200
    ctx->pc = 0x1A5EE8u;
    SET_GPR_U32(ctx, 31, 0x1A5EF0u);
    ctx->pc = 0x1A5EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EE8u;
    // 0x1a5eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7200u, 0x1A5EE8u, 0x1A5EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EF0u;
label_1a5ef0:
    // 0x1a5ef0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a5ef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a5ef4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1a5ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1a5ef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5EF8u;
    {
        const bool branch_taken_0x1a5ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ef8) {
            ctx->pc = 0x1A5F10u;
            goto label_1a5f10;
        }
    }
    ctx->pc = 0x1A5F00u;
    // 0x1a5f00: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1a5f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5f04: 0xc069d78  jal         func_1A75E0
    ctx->pc = 0x1A5F04u;
    SET_GPR_U32(ctx, 31, 0x1A5F0Cu);
    ctx->pc = 0x1A5F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5F04u;
    // 0x1a5f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A75E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A75E0u, 0x1A5F04u, 0x1A5F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F0Cu;
label_1a5f0c:
    // 0x1a5f0c: 0x0  nop
    ctx->pc = 0x1a5f0cu;
    // NOP
label_1a5f10:
    // 0x1a5f10: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a5f10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a5f14: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1a5f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1a5f18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5F18u;
    {
        const bool branch_taken_0x1a5f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F18u;
        // 0x1a5f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f18) {
            ctx->pc = 0x1A5F30u;
            goto label_1a5f30;
        }
    }
    ctx->pc = 0x1A5F20u;
    // 0x1a5f20: 0xc069da8  jal         func_1A76A0
    ctx->pc = 0x1A5F20u;
    SET_GPR_U32(ctx, 31, 0x1A5F28u);
    ctx->pc = 0x1A5F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5F20u;
    // 0x1a5f24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76A0u, 0x1A5F20u, 0x1A5F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F28u;
label_1a5f28:
    // 0x1a5f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5f2c: 0xa2227845  sb          $v0, 0x7845($s1)
    ctx->pc = 0x1a5f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30789), (uint8_t)GPR_U32(ctx, 2));
label_1a5f30:
    // 0x1a5f30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a5f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5f34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5f38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5f44: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F44u;
        // 0x1a5f48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F4Cu;
}
