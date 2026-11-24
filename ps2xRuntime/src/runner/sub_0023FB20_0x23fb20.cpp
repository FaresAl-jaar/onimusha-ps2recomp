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

// Function: sub_0023FB20
// Address: 0x23fb20 - 0x23fca4
void sub_0023FB20_0x23fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FB20_0x23fb20");
#endif

    switch (ctx->pc) {
        case 0x23fb78u: goto label_23fb78;
        case 0x23fb90u: goto label_23fb90;
        case 0x23fba0u: goto label_23fba0;
        case 0x23fbf8u: goto label_23fbf8;
        case 0x23fc0cu: goto label_23fc0c;
        case 0x23fc30u: goto label_23fc30;
        case 0x23fc48u: goto label_23fc48;
        default: break;
    }

    ctx->pc = 0x23fb20u;

    // 0x23fb20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23fb24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23fb28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23fb28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb2c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x23fb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x23fb30: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x23fb30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb34: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x23fb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x23fb38: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x23fb38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23fb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23fb40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23fb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23fb44: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23fb48: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23fb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x23fb4c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23fb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x23fb50: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x23fb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x23fb54: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x23fb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x23fb58: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x23fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23fb5c: 0x8cb60014  lw          $s6, 0x14($a1)
    ctx->pc = 0x23fb5cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23fb60: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x23fb64: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x23fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x23fb68: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x23fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x23fb6c: 0x1ac00013  blez        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x23FB6Cu;
    {
        const bool branch_taken_0x23fb6c = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x23FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB6Cu;
        // 0x23fb70: 0x8cb50004  lw          $s5, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb6c) {
            ctx->pc = 0x23FBBCu;
            goto label_23fbbc;
        }
    }
    ctx->pc = 0x23FB74u;
    // 0x23fb74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23fb74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fb78:
    // 0x23fb78: 0x5aa0000d  blezl       $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x23FB78u;
    {
        const bool branch_taken_0x23fb78 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x23fb78) {
            ctx->pc = 0x23FB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FB78u;
            // 0x23fb7c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FBB0u;
            goto label_23fbb0;
        }
    }
    ctx->pc = 0x23FB80u;
    // 0x23fb80: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x23fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23fb84: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x23fb84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb88: 0x5e8821  addu        $s1, $v0, $fp
    ctx->pc = 0x23fb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x23fb8c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x23fb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23fb90:
    // 0x23fb90: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x23fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23fb94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23fb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb98: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FB98u;
    SET_GPR_U32(ctx, 31, 0x23FBA0u);
    ctx->pc = 0x23FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB98u;
    // 0x23fb9c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FB98u, 0x23FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBA0u;
label_23fba0:
    // 0x23fba0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x23fba4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23FBA4u;
    {
        const bool branch_taken_0x23fba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBA4u;
        // 0x23fba8: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fba4) {
            ctx->pc = 0x23FB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fb90;
        }
    }
    ctx->pc = 0x23FBACu;
    // 0x23fbac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23fbacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23fbb0:
    // 0x23fbb0: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x23fbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x23fbb4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23FBB4u;
    {
        const bool branch_taken_0x23fbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBB4u;
        // 0x23fbb8: 0x26940180  addiu       $s4, $s4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbb4) {
            ctx->pc = 0x23FB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fb78;
        }
    }
    ctx->pc = 0x23FBBCu;
label_23fbbc:
    // 0x23fbbc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fbc0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x23fbc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbc4: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x23fbc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23fbc8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x23FBC8u;
    {
        const bool branch_taken_0x23fbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fbc8) {
            ctx->pc = 0x23FBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FBC8u;
            // 0x23fbcc: 0x8fb20000  lw          $s2, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FC20u;
            goto label_23fc20;
        }
    }
    ctx->pc = 0x23FBD0u;
    // 0x23fbd0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x23fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23fbd4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x23fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x23fbd8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23fbdc: 0x929023  subu        $s2, $a0, $s2
    ctx->pc = 0x23fbdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x23fbe0: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x23fbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x23fbe4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23fbe8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x23fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x23fbec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23fbf0: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x23fbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x23fbf4: 0x0  nop
    ctx->pc = 0x23fbf4u;
    // NOP
label_23fbf8:
    // 0x23fbf8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23fbfc: 0x26310180  addiu       $s1, $s1, 0x180
    ctx->pc = 0x23fbfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x23fc00: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23fc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc04: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23FC04u;
    SET_GPR_U32(ctx, 31, 0x23FC0Cu);
    ctx->pc = 0x23FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC04u;
    // 0x23fc08: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23FC04u, 0x23FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC0Cu;
label_23fc0c:
    // 0x23fc0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23fc10: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x23fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x23fc14: 0x1640fff8  bnez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23FC14u;
    {
        const bool branch_taken_0x23fc14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC14u;
        // 0x23fc18: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc14) {
            ctx->pc = 0x23FBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fbf8;
        }
    }
    ctx->pc = 0x23FC1Cu;
    // 0x23fc1c: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x23fc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23fc20:
    // 0x23fc20: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x23fc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x23fc24: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x23FC24u;
    {
        const bool branch_taken_0x23fc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fc24) {
            ctx->pc = 0x23FC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FC24u;
            // 0x23fc28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FC78u;
            goto label_23fc78;
        }
    }
    ctx->pc = 0x23FC2Cu;
    // 0x23fc2c: 0x0  nop
    ctx->pc = 0x23fc2cu;
    // NOP
label_23fc30:
    // 0x23fc30: 0x5aa0000d  blezl       $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x23FC30u;
    {
        const bool branch_taken_0x23fc30 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x23fc30) {
            ctx->pc = 0x23FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FC30u;
            // 0x23fc34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FC68u;
            goto label_23fc68;
        }
    }
    ctx->pc = 0x23FC38u;
    // 0x23fc38: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x23fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23fc3c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x23fc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc40: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x23fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x23fc44: 0x0  nop
    ctx->pc = 0x23fc44u;
    // NOP
label_23fc48:
    // 0x23fc48: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x23fc4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23fc50: 0x0  nop
    ctx->pc = 0x23fc50u;
    // NOP
    // 0x23fc54: 0x0  nop
    ctx->pc = 0x23fc54u;
    // NOP
    // 0x23fc58: 0x0  nop
    ctx->pc = 0x23fc58u;
    // NOP
    // 0x23fc5c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23FC5Cu;
    {
        const bool branch_taken_0x23fc5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC5Cu;
        // 0x23fc60: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc5c) {
            ctx->pc = 0x23FC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fc48;
        }
    }
    ctx->pc = 0x23FC64u;
    // 0x23fc64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23fc64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23fc68:
    // 0x23fc68: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x23fc68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x23fc6c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23FC6Cu;
    {
        const bool branch_taken_0x23fc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fc6c) {
            ctx->pc = 0x23FC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fc30;
        }
    }
    ctx->pc = 0x23FC74u;
    // 0x23fc74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23fc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23fc78:
    // 0x23fc78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23fc78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fc7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23fc7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fc80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23fc80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23fc84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23fc84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fc88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23fc88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23fc8c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x23fc8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fc90: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x23fc90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23fc94: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x23fc94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fc98: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x23fc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23fc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC9Cu;
        // 0x23fca0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FCA4u;
}
