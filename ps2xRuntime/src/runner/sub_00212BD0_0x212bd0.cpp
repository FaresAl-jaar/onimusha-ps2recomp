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

// Function: sub_00212BD0
// Address: 0x212bd0 - 0x212eb0
void sub_00212BD0_0x212bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212BD0_0x212bd0");
#endif

    switch (ctx->pc) {
        case 0x212c2cu: goto label_212c2c;
        case 0x212c48u: goto label_212c48;
        case 0x212c58u: goto label_212c58;
        case 0x212c68u: goto label_212c68;
        case 0x212c78u: goto label_212c78;
        case 0x212c84u: goto label_212c84;
        case 0x212c9cu: goto label_212c9c;
        case 0x212cb8u: goto label_212cb8;
        case 0x212cd0u: goto label_212cd0;
        case 0x212ce4u: goto label_212ce4;
        case 0x212d0cu: goto label_212d0c;
        case 0x212d24u: goto label_212d24;
        case 0x212d34u: goto label_212d34;
        case 0x212d50u: goto label_212d50;
        case 0x212d7cu: goto label_212d7c;
        case 0x212e04u: goto label_212e04;
        case 0x212e50u: goto label_212e50;
        default: break;
    }

    ctx->pc = 0x212bd0u;

    // 0x212bd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x212bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x212bd4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x212bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x212bd8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x212bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bdc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x212bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x212be0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x212be0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212be4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x212be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x212be8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bec: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x212becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x212bf0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x212bf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bf4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x212bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x212bf8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x212bf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bfc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x212bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x212c00: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x212c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c04: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x212c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x212c08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x212c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x212c0c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x212c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x212c10: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x212c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x212c14: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x212c14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x212c18: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x212c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x212c1c: 0x8e341f7c  lw          $s4, 0x1F7C($s1)
    ctx->pc = 0x212c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8060)));
    // 0x212c20: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x212c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x212c24: 0xc084ef8  jal         func_213BE0
    ctx->pc = 0x212C24u;
    SET_GPR_U32(ctx, 31, 0x212C2Cu);
    ctx->pc = 0x212C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C24u;
    // 0x212c28: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BE0u, 0x212C24u, 0x212C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C2Cu;
label_212c2c:
    // 0x212c2c: 0x50400095  beql        $v0, $zero, . + 4 + (0x95 << 2)
    ctx->pc = 0x212C2Cu;
    {
        const bool branch_taken_0x212c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212c2c) {
            ctx->pc = 0x212C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212C2Cu;
            // 0x212c30: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212E84u;
            goto label_212e84;
        }
    }
    ctx->pc = 0x212C34u;
    // 0x212c34: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x212c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x212c38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x212C38u;
    {
        const bool branch_taken_0x212c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212c38) {
            ctx->pc = 0x212C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212C38u;
            // 0x212c3c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212C4Cu;
            goto label_212c4c;
        }
    }
    ctx->pc = 0x212C40u;
    // 0x212c40: 0xc07f410  jal         func_1FD040
    ctx->pc = 0x212C40u;
    SET_GPR_U32(ctx, 31, 0x212C48u);
    ctx->pc = 0x212C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C40u;
    // 0x212c44: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD040u, 0x212C40u, 0x212C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C48u;
label_212c48:
    // 0x212c48: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x212c48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212c4c:
    // 0x212c4c: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x212c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x212c50: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x212C50u;
    SET_GPR_U32(ctx, 31, 0x212C58u);
    ctx->pc = 0x212C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C50u;
    // 0x212c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x212C50u, 0x212C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C58u;
label_212c58:
    // 0x212c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c5c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x212c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x212c60: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x212C60u;
    SET_GPR_U32(ctx, 31, 0x212C68u);
    ctx->pc = 0x212C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C60u;
    // 0x212c64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x212C60u, 0x212C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C68u;
label_212c68:
    // 0x212c68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x212c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c70: 0xc07ece4  jal         func_1FB390
    ctx->pc = 0x212C70u;
    SET_GPR_U32(ctx, 31, 0x212C78u);
    ctx->pc = 0x212C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C70u;
    // 0x212c74: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB390u, 0x212C70u, 0x212C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C78u;
label_212c78:
    // 0x212c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c7c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x212C7Cu;
    SET_GPR_U32(ctx, 31, 0x212C84u);
    ctx->pc = 0x212C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C7Cu;
    // 0x212c80: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x212C7Cu, 0x212C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C84u;
label_212c84:
    // 0x212c84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x212C84u;
    {
        const bool branch_taken_0x212c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C84u;
        // 0x212c88: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c84) {
            ctx->pc = 0x212CA8u;
            goto label_212ca8;
        }
    }
    ctx->pc = 0x212C8Cu;
    // 0x212c8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x212c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c90: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0
    ctx->pc = 0x212c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
    // 0x212c94: 0xc07ecf8  jal         func_1FB3E0
    ctx->pc = 0x212C94u;
    SET_GPR_U32(ctx, 31, 0x212C9Cu);
    ctx->pc = 0x212C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C94u;
    // 0x212c98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB3E0u, 0x212C94u, 0x212C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C9Cu;
label_212c9c:
    // 0x212c9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x212C9Cu;
    {
        const bool branch_taken_0x212c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C9Cu;
        // 0x212ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c9c) {
            ctx->pc = 0x212CBCu;
            goto label_212cbc;
        }
    }
    ctx->pc = 0x212CA4u;
    // 0x212ca4: 0x0  nop
    ctx->pc = 0x212ca4u;
    // NOP
label_212ca8:
    // 0x212ca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x212ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cb0: 0xc07ecf8  jal         func_1FB3E0
    ctx->pc = 0x212CB0u;
    SET_GPR_U32(ctx, 31, 0x212CB8u);
    ctx->pc = 0x212CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CB0u;
    // 0x212cb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB3E0u, 0x212CB0u, 0x212CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CB8u;
label_212cb8:
    // 0x212cb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x212cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212cbc:
    // 0x212cbc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x212cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cc0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x212cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cc4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x212cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cc8: 0xc07ed0c  jal         func_1FB430
    ctx->pc = 0x212CC8u;
    SET_GPR_U32(ctx, 31, 0x212CD0u);
    ctx->pc = 0x212CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CC8u;
    // 0x212ccc: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB430u, 0x212CC8u, 0x212CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CD0u;
label_212cd0:
    // 0x212cd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x212CD0u;
    {
        const bool branch_taken_0x212cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CD0u;
        // 0x212cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212cd0) {
            ctx->pc = 0x212CE8u;
            goto label_212ce8;
        }
    }
    ctx->pc = 0x212CD8u;
    // 0x212cd8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x212cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x212cdc: 0xc0848e0  jal         func_212380
    ctx->pc = 0x212CDCu;
    SET_GPR_U32(ctx, 31, 0x212CE4u);
    ctx->pc = 0x212CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CDCu;
    // 0x212ce0: 0x34a50d03  ori         $a1, $a1, 0xD03 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3331);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x212CDCu, 0x212CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CE4u;
label_212ce4:
    // 0x212ce4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x212ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_212ce8:
    // 0x212ce8: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x212ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x212cec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x212cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x212cf0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x212cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x212cf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x212CF4u;
    {
        const bool branch_taken_0x212cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CF4u;
        // 0x212cf8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212cf4) {
            ctx->pc = 0x212D10u;
            goto label_212d10;
        }
    }
    ctx->pc = 0x212CFCu;
    // 0x212cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d00: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x212d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d04: 0xc0850d2  jal         func_214348
    ctx->pc = 0x212D04u;
    SET_GPR_U32(ctx, 31, 0x212D0Cu);
    ctx->pc = 0x212D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D04u;
    // 0x212d08: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214348u, 0x212D04u, 0x212D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D0Cu;
label_212d0c:
    // 0x212d0c: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x212d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_212d10:
    // 0x212d10: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x212d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x212d14: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x212D14u;
    {
        const bool branch_taken_0x212d14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x212d14) {
            ctx->pc = 0x212D60u;
            goto label_212d60;
        }
    }
    ctx->pc = 0x212D1Cu;
    // 0x212d1c: 0xc084144  jal         func_210510
    ctx->pc = 0x212D1Cu;
    SET_GPR_U32(ctx, 31, 0x212D24u);
    ctx->pc = 0x212D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D1Cu;
    // 0x212d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210510u, 0x212D1Cu, 0x212D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D24u;
label_212d24:
    // 0x212d24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x212D24u;
    {
        const bool branch_taken_0x212d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212d24) {
            ctx->pc = 0x212D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D24u;
            // 0x212d28: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212D40u;
            goto label_212d40;
        }
    }
    ctx->pc = 0x212D2Cu;
    // 0x212d2c: 0xc084ef2  jal         func_213BC8
    ctx->pc = 0x212D2Cu;
    SET_GPR_U32(ctx, 31, 0x212D34u);
    ctx->pc = 0x212D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D2Cu;
    // 0x212d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BC8u, 0x212D2Cu, 0x212D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D34u;
label_212d34:
    // 0x212d34: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x212d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x212d38: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x212D38u;
    {
        const bool branch_taken_0x212d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D38u;
        // 0x212d3c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d38) {
            ctx->pc = 0x212E78u;
            goto label_212e78;
        }
    }
    ctx->pc = 0x212D40u;
label_212d40:
    // 0x212d40: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x212D40u;
    {
        const bool branch_taken_0x212d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x212d40) {
            ctx->pc = 0x212D60u;
            goto label_212d60;
        }
    }
    ctx->pc = 0x212D48u;
    // 0x212d48: 0xc08414c  jal         func_210530
    ctx->pc = 0x212D48u;
    SET_GPR_U32(ctx, 31, 0x212D50u);
    ctx->pc = 0x212D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D48u;
    // 0x212d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210530u, 0x212D48u, 0x212D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D50u;
label_212d50:
    // 0x212d50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212D50u;
    {
        const bool branch_taken_0x212d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D50u;
        // 0x212d54: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d50) {
            ctx->pc = 0x212D60u;
            goto label_212d60;
        }
    }
    ctx->pc = 0x212D58u;
    // 0x212d58: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x212D58u;
    {
        const bool branch_taken_0x212d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D58u;
        // 0x212d5c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d58) {
            ctx->pc = 0x212E78u;
            goto label_212e78;
        }
    }
    ctx->pc = 0x212D60u;
label_212d60:
    // 0x212d60: 0x17c00021  bnez        $fp, . + 4 + (0x21 << 2)
    ctx->pc = 0x212D60u;
    {
        const bool branch_taken_0x212d60 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x212D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D60u;
        // 0x212d64: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d60) {
            ctx->pc = 0x212DE8u;
            goto label_212de8;
        }
    }
    ctx->pc = 0x212D68u;
    // 0x212d68: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x212d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d6c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x212d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d74: 0xc084bca  jal         func_212F28
    ctx->pc = 0x212D74u;
    SET_GPR_U32(ctx, 31, 0x212D7Cu);
    ctx->pc = 0x212D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D74u;
    // 0x212d78: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212F28u, 0x212D74u, 0x212D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D7Cu;
label_212d7c:
    // 0x212d7c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x212d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x212d80: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x212d80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x212d84: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x212d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x212d88: 0x18a0003d  blez        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x212D88u;
    {
        const bool branch_taken_0x212d88 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x212D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D88u;
        // 0x212d8c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d88) {
            ctx->pc = 0x212E80u;
            goto label_212e80;
        }
    }
    ctx->pc = 0x212D90u;
    // 0x212d90: 0x8e830158  lw          $v1, 0x158($s4)
    ctx->pc = 0x212d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x212d94: 0x460003b  bltz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x212D94u;
    {
        const bool branch_taken_0x212d94 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x212D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D94u;
        // 0x212d98: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d94) {
            ctx->pc = 0x212E84u;
            goto label_212e84;
        }
    }
    ctx->pc = 0x212D9Cu;
    // 0x212d9c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x212d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x212da0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x212da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x212da4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212DA4u;
    {
        const bool branch_taken_0x212da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DA4u;
        // 0x212da8: 0x653021  addu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212da4) {
            ctx->pc = 0x212DB8u;
            goto label_212db8;
        }
    }
    ctx->pc = 0x212DACu;
    // 0x212dac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x212DACu;
    {
        const bool branch_taken_0x212dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DACu;
        // 0x212db0: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212dac) {
            ctx->pc = 0x212E78u;
            goto label_212e78;
        }
    }
    ctx->pc = 0x212DB4u;
    // 0x212db4: 0x0  nop
    ctx->pc = 0x212db4u;
    // NOP
label_212db8:
    // 0x212db8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x212db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x212dbc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x212DBCu;
    {
        const bool branch_taken_0x212dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212dbc) {
            ctx->pc = 0x212DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212DBCu;
            // 0x212dc0: 0xae860158  sw          $a2, 0x158($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212DE0u;
            goto label_212de0;
        }
    }
    ctx->pc = 0x212DC4u;
    // 0x212dc4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x212dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x212dc8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x212dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x212dcc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x212dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x212dd0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x212dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x212dd4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x212DD4u;
    {
        const bool branch_taken_0x212dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DD4u;
        // 0x212dd8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212dd4) {
            ctx->pc = 0x212E78u;
            goto label_212e78;
        }
    }
    ctx->pc = 0x212DDCu;
    // 0x212ddc: 0x0  nop
    ctx->pc = 0x212ddcu;
    // NOP
label_212de0:
    // 0x212de0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x212DE0u;
    {
        const bool branch_taken_0x212de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DE0u;
        // 0x212de4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212de0) {
            ctx->pc = 0x212E7Cu;
            goto label_212e7c;
        }
    }
    ctx->pc = 0x212DE8u;
label_212de8:
    // 0x212de8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x212de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x212dec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x212df0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x212DF0u;
    {
        const bool branch_taken_0x212df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212df0) {
            ctx->pc = 0x212DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212DF0u;
            // 0x212df4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212E38u;
            goto label_212e38;
        }
    }
    ctx->pc = 0x212DF8u;
    // 0x212df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dfc: 0xc084f5e  jal         func_213D78
    ctx->pc = 0x212DFCu;
    SET_GPR_U32(ctx, 31, 0x212E04u);
    ctx->pc = 0x212E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DFCu;
    // 0x212e00: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D78u, 0x212DFCu, 0x212E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E04u;
label_212e04:
    // 0x212e04: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x212e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212e08: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x212E08u;
    {
        const bool branch_taken_0x212e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E08u;
        // 0x212e0c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e08) {
            ctx->pc = 0x212E80u;
            goto label_212e80;
        }
    }
    ctx->pc = 0x212E10u;
    // 0x212e10: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x212e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x212e14: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x212e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x212e18: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x212E18u;
    {
        const bool branch_taken_0x212e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E18u;
        // 0x212e1c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e18) {
            ctx->pc = 0x212E80u;
            goto label_212e80;
        }
    }
    ctx->pc = 0x212E20u;
    // 0x212e20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e24: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x212E24u;
    {
        const bool branch_taken_0x212e24 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x212e24) {
            ctx->pc = 0x212E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212E24u;
            // 0x212e28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212E2Cu;
            goto label_212e2c;
        }
    }
    ctx->pc = 0x212E2Cu;
label_212e2c:
    // 0x212e2c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x212e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x212e30: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x212E30u;
    {
        const bool branch_taken_0x212e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E30u;
        // 0x212e34: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e30) {
            ctx->pc = 0x212E7Cu;
            goto label_212e7c;
        }
    }
    ctx->pc = 0x212E38u;
label_212e38:
    // 0x212e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e3c: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x212e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x212e40: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x212e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x212e44: 0x2c53023  subu        $a2, $s6, $a1
    ctx->pc = 0x212e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x212e48: 0xc084c34  jal         func_2130D0
    ctx->pc = 0x212E48u;
    SET_GPR_U32(ctx, 31, 0x212E50u);
    ctx->pc = 0x212E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E48u;
    // 0x212e4c: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2130D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2130D0u, 0x212E48u, 0x212E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E50u;
label_212e50:
    // 0x212e50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212e54: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x212e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x212e58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212e5c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x212E5Cu;
    {
        const bool branch_taken_0x212e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x212E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E5Cu;
        // 0x212e60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e5c) {
            ctx->pc = 0x212E78u;
            goto label_212e78;
        }
    }
    ctx->pc = 0x212E64u;
    // 0x212e64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e68: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x212e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x212e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212e70: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x212e70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x212e74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x212e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212e78:
    // 0x212e78: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x212e78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
label_212e7c:
    // 0x212e7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x212e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_212e80:
    // 0x212e80: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x212e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212e84:
    // 0x212e84: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x212e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212e88: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x212e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212e8c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x212e8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x212e90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x212e90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212e94: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x212e94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x212e98: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x212e98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212e9c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x212e9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x212ea0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x212ea0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x212ea4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x212ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x212ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x212EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EA8u;
        // 0x212eac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212EB0u;
}
