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

// Function: sub_00117B38
// Address: 0x117b38 - 0x117d2c
void sub_00117B38_0x117b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117B38_0x117b38");
#endif

    switch (ctx->pc) {
        case 0x117b88u: goto label_117b88;
        case 0x117bacu: goto label_117bac;
        case 0x117bb4u: goto label_117bb4;
        case 0x117bc8u: goto label_117bc8;
        case 0x117be0u: goto label_117be0;
        case 0x117c14u: goto label_117c14;
        case 0x117c1cu: goto label_117c1c;
        case 0x117c30u: goto label_117c30;
        case 0x117c48u: goto label_117c48;
        case 0x117c90u: goto label_117c90;
        case 0x117c98u: goto label_117c98;
        case 0x117ca8u: goto label_117ca8;
        case 0x117cc0u: goto label_117cc0;
        case 0x117ce8u: goto label_117ce8;
        case 0x117d04u: goto label_117d04;
        default: break;
    }

    ctx->pc = 0x117b38u;

    // 0x117b38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117b3c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x117b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x117b40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117b44: 0x24842970  addiu       $a0, $a0, 0x2970
    ctx->pc = 0x117b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10608));
    // 0x117b48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117b4c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x117b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x117b50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117b54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117b58: 0x26503198  addiu       $s0, $s2, 0x3198
    ctx->pc = 0x117b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12696));
    // 0x117b5c: 0x8e453198  lw          $a1, 0x3198($s2)
    ctx->pc = 0x117b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x403198u));
    // 0x117b60: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x117b60u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x40319Cu));
    // 0x117b64: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x117b64u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4031A0u));
    // 0x117b68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x117b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b6c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x117b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x117b70: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x117b70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x117b74: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x117b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b78: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x117b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x117b7c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x117b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x117b80: 0xc044352  jal         func_110D48
    ctx->pc = 0x117B80u;
    SET_GPR_U32(ctx, 31, 0x117B88u);
    ctx->pc = 0x117B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B80u;
    // 0x117b84: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D48u, 0x117B80u, 0x117B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B88u;
label_117b88:
    // 0x117b88: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x117b88u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
    // 0x117b8c: 0x40f  sync.p
    ctx->pc = 0x117b8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117b90: 0x8e513198  lw          $s1, 0x3198($s2)
    ctx->pc = 0x117b90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12696)));
    // 0x117b94: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x117b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x117b98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117B98u;
    {
        const bool branch_taken_0x117b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B98u;
        // 0x117b9c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b98) {
            ctx->pc = 0x117BB4u;
            goto label_117bb4;
        }
    }
    ctx->pc = 0x117BA0u;
    // 0x117ba0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x117ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x117ba4: 0xc044352  jal         func_110D48
    ctx->pc = 0x117BA4u;
    SET_GPR_U32(ctx, 31, 0x117BACu);
    ctx->pc = 0x117BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117BA4u;
    // 0x117ba8: 0x248429a8  addiu       $a0, $a0, 0x29A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D48u, 0x117BA4u, 0x117BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BACu;
label_117bac:
    // 0x117bac: 0xc0461d6  jal         func_118758
    ctx->pc = 0x117BACu;
    SET_GPR_U32(ctx, 31, 0x117BB4u);
    ctx->pc = 0x117BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117BACu;
    // 0x117bb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118758u, 0x117BACu, 0x117BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BB4u;
label_117bb4:
    // 0x117bb4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x117bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x117bb8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x117BB8u;
    {
        const bool branch_taken_0x117bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BB8u;
        // 0x117bbc: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bb8) {
            ctx->pc = 0x117BF0u;
            goto label_117bf0;
        }
    }
    ctx->pc = 0x117BC0u;
    // 0x117bc0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x117bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117bc4: 0x0  nop
    ctx->pc = 0x117bc4u;
    // NOP
label_117bc8:
    // 0x117bc8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x117bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bcc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x117bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x117bd0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x117bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117bd4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x117bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117bd8: 0xc045e96  jal         func_117A58
    ctx->pc = 0x117BD8u;
    SET_GPR_U32(ctx, 31, 0x117BE0u);
    ctx->pc = 0x117BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117BD8u;
    // 0x117bdc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A58u, 0x117BD8u, 0x117BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BE0u;
label_117be0:
    // 0x117be0: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x117be0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x117be4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x117be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x117be8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x117BE8u;
    {
        const bool branch_taken_0x117be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117be8) {
            ctx->pc = 0x117BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117BE8u;
            // 0x117bec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117bc8;
        }
    }
    ctx->pc = 0x117BF0u;
label_117bf0:
    // 0x117bf0: 0x26503198  addiu       $s0, $s2, 0x3198
    ctx->pc = 0x117bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12696));
    // 0x117bf4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x117bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x117bf8: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x117bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x117bfc: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x117bfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x117c00: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x117C00u;
    {
        const bool branch_taken_0x117c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C00u;
        // 0x117c04: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c00) {
            ctx->pc = 0x117C20u;
            goto label_117c20;
        }
    }
    ctx->pc = 0x117C08u;
    // 0x117c08: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x117c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x117c0c: 0xc044352  jal         func_110D48
    ctx->pc = 0x117C0Cu;
    SET_GPR_U32(ctx, 31, 0x117C14u);
    ctx->pc = 0x117C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C0Cu;
    // 0x117c10: 0x248429c0  addiu       $a0, $a0, 0x29C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D48u, 0x117C0Cu, 0x117C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C14u;
label_117c14:
    // 0x117c14: 0xc0461d6  jal         func_118758
    ctx->pc = 0x117C14u;
    SET_GPR_U32(ctx, 31, 0x117C1Cu);
    ctx->pc = 0x117C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C14u;
    // 0x117c18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118758u, 0x117C14u, 0x117C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C1Cu;
label_117c1c:
    // 0x117c1c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x117c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_117c20:
    // 0x117c20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x117C20u;
    {
        const bool branch_taken_0x117c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C20u;
        // 0x117c24: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c20) {
            ctx->pc = 0x117C58u;
            goto label_117c58;
        }
    }
    ctx->pc = 0x117C28u;
    // 0x117c28: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x117c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117c2c: 0x0  nop
    ctx->pc = 0x117c2cu;
    // NOP
label_117c30:
    // 0x117c30: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x117c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c34: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x117c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x117c38: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x117c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117c3c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117c40: 0xc045e96  jal         func_117A58
    ctx->pc = 0x117C40u;
    SET_GPR_U32(ctx, 31, 0x117C48u);
    ctx->pc = 0x117C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C40u;
    // 0x117c44: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A58u, 0x117C40u, 0x117C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C48u;
label_117c48:
    // 0x117c48: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x117c48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x117c4c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x117c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x117c50: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x117C50u;
    {
        const bool branch_taken_0x117c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117c50) {
            ctx->pc = 0x117C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117C50u;
            // 0x117c54: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117c30;
        }
    }
    ctx->pc = 0x117C58u;
label_117c58:
    // 0x117c58: 0x26503198  addiu       $s0, $s2, 0x3198
    ctx->pc = 0x117c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12696));
    // 0x117c5c: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x117c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x117c60: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x117c60u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x117c64: 0x40f  sync.p
    ctx->pc = 0x117c64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117c68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x117c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117c6c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x117C6Cu;
    {
        const bool branch_taken_0x117c6c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x117c6c) {
            ctx->pc = 0x117C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117C6Cu;
            // 0x117c70: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117CD4u;
            goto label_117cd4;
        }
    }
    ctx->pc = 0x117C74u;
    // 0x117c74: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x117c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x117c78: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x117c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x117c7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117C7Cu;
    {
        const bool branch_taken_0x117c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C7Cu;
        // 0x117c80: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c7c) {
            ctx->pc = 0x117C9Cu;
            goto label_117c9c;
        }
    }
    ctx->pc = 0x117C84u;
    // 0x117c84: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x117c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x117c88: 0xc044352  jal         func_110D48
    ctx->pc = 0x117C88u;
    SET_GPR_U32(ctx, 31, 0x117C90u);
    ctx->pc = 0x117C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C88u;
    // 0x117c8c: 0x248429d8  addiu       $a0, $a0, 0x29D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D48u, 0x117C88u, 0x117C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C90u;
label_117c90:
    // 0x117c90: 0xc0461d6  jal         func_118758
    ctx->pc = 0x117C90u;
    SET_GPR_U32(ctx, 31, 0x117C98u);
    ctx->pc = 0x117C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C90u;
    // 0x117c94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118758u, 0x117C90u, 0x117C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C98u;
label_117c98:
    // 0x117c98: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x117c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_117c9c:
    // 0x117c9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x117C9Cu;
    {
        const bool branch_taken_0x117c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C9Cu;
        // 0x117ca0: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c9c) {
            ctx->pc = 0x117CD0u;
            goto label_117cd0;
        }
    }
    ctx->pc = 0x117CA4u;
    // 0x117ca4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x117ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_117ca8:
    // 0x117ca8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x117ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cac: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x117cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x117cb0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x117cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117cb4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x117cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117cb8: 0xc045e96  jal         func_117A58
    ctx->pc = 0x117CB8u;
    SET_GPR_U32(ctx, 31, 0x117CC0u);
    ctx->pc = 0x117CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CB8u;
    // 0x117cbc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A58u, 0x117CB8u, 0x117CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117CC0u;
label_117cc0:
    // 0x117cc0: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x117cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x117cc4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x117cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x117cc8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x117CC8u;
    {
        const bool branch_taken_0x117cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117cc8) {
            ctx->pc = 0x117CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117CC8u;
            // 0x117ccc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117ca8;
        }
    }
    ctx->pc = 0x117CD0u;
label_117cd0:
    // 0x117cd0: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x117cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_117cd4:
    // 0x117cd4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x117cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x117cd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x117CD8u;
    {
        const bool branch_taken_0x117cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CD8u;
        // 0x117cdc: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cd8) {
            ctx->pc = 0x117D10u;
            goto label_117d10;
        }
    }
    ctx->pc = 0x117CE0u;
    // 0x117ce0: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x117ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x117ce4: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x117ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_117ce8:
    // 0x117ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x117cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x117cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cfc: 0xc045e96  jal         func_117A58
    ctx->pc = 0x117CFCu;
    SET_GPR_U32(ctx, 31, 0x117D04u);
    ctx->pc = 0x117D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CFCu;
    // 0x117d00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A58u, 0x117CFCu, 0x117D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D04u;
label_117d04:
    // 0x117d04: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x117d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x117d08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x117D08u;
    {
        const bool branch_taken_0x117d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D08u;
        // 0x117d0c: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d08) {
            ctx->pc = 0x117CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117ce8;
        }
    }
    ctx->pc = 0x117D10u;
label_117d10:
    // 0x117d10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117d14: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x117d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117d1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117d24: 0x3e00008  jr          $ra
    ctx->pc = 0x117D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D24u;
        // 0x117d28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D2Cu;
}
