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

// Function: sub_00159C30
// Address: 0x159c30 - 0x15a050
void sub_00159C30_0x159c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159C30_0x159c30");
#endif

    switch (ctx->pc) {
        case 0x159c54u: goto label_159c54;
        case 0x159ca8u: goto label_159ca8;
        case 0x159cc4u: goto label_159cc4;
        case 0x159d20u: goto label_159d20;
        case 0x159d48u: goto label_159d48;
        case 0x159d64u: goto label_159d64;
        case 0x159d80u: goto label_159d80;
        case 0x159da4u: goto label_159da4;
        case 0x159e10u: goto label_159e10;
        case 0x159e40u: goto label_159e40;
        case 0x159e64u: goto label_159e64;
        case 0x159eb4u: goto label_159eb4;
        case 0x159eecu: goto label_159eec;
        case 0x159f10u: goto label_159f10;
        case 0x159fa0u: goto label_159fa0;
        case 0x159fc4u: goto label_159fc4;
        case 0x159fecu: goto label_159fec;
        default: break;
    }

    ctx->pc = 0x159c30u;

    // 0x159c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159c34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x159c38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159c3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159c40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x159c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159c48: 0x8f908610  lw          $s0, -0x79F0($gp)
    ctx->pc = 0x159c48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x159c4c: 0xc056814  jal         func_15A050
    ctx->pc = 0x159C4Cu;
    SET_GPR_U32(ctx, 31, 0x159C54u);
    ctx->pc = 0x159C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159C4Cu;
    // 0x159c50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A050u, 0x159C4Cu, 0x159C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159C54u;
label_159c54:
    // 0x159c54: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159c58: 0x8c221814  lw          $v0, 0x1814($at)
    ctx->pc = 0x159c58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x811814u));
    // 0x159c5c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x159c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x159c60: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x159C60u;
    {
        const bool branch_taken_0x159c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C60u;
        // 0x159c64: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c60) {
            ctx->pc = 0x159CA8u;
            goto label_159ca8;
        }
    }
    ctx->pc = 0x159C68u;
    // 0x159c68: 0x8c225f08  lw          $v0, 0x5F08($at)
    ctx->pc = 0x159c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24328)));
    // 0x159c6c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x159c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x159c70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x159C70u;
    {
        const bool branch_taken_0x159c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159c70) {
            ctx->pc = 0x159CA8u;
            goto label_159ca8;
        }
    }
    ctx->pc = 0x159C78u;
    // 0x159c78: 0x82020338  lb          $v0, 0x338($s0)
    ctx->pc = 0x159c78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x159c7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159C7Cu;
    {
        const bool branch_taken_0x159c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C7Cu;
        // 0x159c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c7c) {
            ctx->pc = 0x159CA8u;
            goto label_159ca8;
        }
    }
    ctx->pc = 0x159C84u;
    // 0x159c84: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x159c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x159c88: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x159c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x159c8c: 0xa2020338  sb          $v0, 0x338($s0)
    ctx->pc = 0x159c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 824), (uint8_t)GPR_U32(ctx, 2));
    // 0x159c90: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x159c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x159c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159c9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ca0: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x159CA0u;
    SET_GPR_U32(ctx, 31, 0x159CA8u);
    ctx->pc = 0x159CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CA0u;
    // 0x159ca4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x159CA0u, 0x159CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CA8u;
label_159ca8:
    // 0x159ca8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x159ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x159cac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x159cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cb0: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x159cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x159cb4: 0x24070720  addiu       $a3, $zero, 0x720
    ctx->pc = 0x159cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
    // 0x159cb8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x159cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x159cbc: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x159CBCu;
    SET_GPR_U32(ctx, 31, 0x159CC4u);
    ctx->pc = 0x159CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CBCu;
    // 0x159cc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x159CBCu, 0x159CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CC4u;
label_159cc4:
    // 0x159cc4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159cc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x159cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x159ccc: 0x842395a6  lh          $v1, -0x6A5A($at)
    ctx->pc = 0x159cccu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x8095A6u));
    // 0x159cd0: 0x106200c1  beq         $v1, $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x159CD0u;
    {
        const bool branch_taken_0x159cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CD0u;
        // 0x159cd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cd0) {
            ctx->pc = 0x159FD8u;
            goto label_159fd8;
        }
    }
    ctx->pc = 0x159CD8u;
    // 0x159cd8: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x159CD8u;
    {
        const bool branch_taken_0x159cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159cd8) {
            ctx->pc = 0x159EA0u;
            goto label_159ea0;
        }
    }
    ctx->pc = 0x159CE0u;
    // 0x159ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159ce4: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x159CE4u;
    {
        const bool branch_taken_0x159ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159ce4) {
            ctx->pc = 0x159DC8u;
            goto label_159dc8;
        }
    }
    ctx->pc = 0x159CECu;
    // 0x159cec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x159CECu;
    {
        const bool branch_taken_0x159cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159cec) {
            ctx->pc = 0x159D00u;
            goto label_159d00;
        }
    }
    ctx->pc = 0x159CF4u;
    // 0x159cf4: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x159CF4u;
    {
        const bool branch_taken_0x159cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159cf4) {
            ctx->pc = 0x15A030u;
            goto label_15a030;
        }
    }
    ctx->pc = 0x159CFCu;
    // 0x159cfc: 0x0  nop
    ctx->pc = 0x159cfcu;
    // NOP
label_159d00:
    // 0x159d00: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x159d04: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x159d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x159d08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159d14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d18: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x159D18u;
    SET_GPR_U32(ctx, 31, 0x159D20u);
    ctx->pc = 0x159D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D18u;
    // 0x159d1c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x159D18u, 0x159D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D20u;
label_159d20:
    // 0x159d20: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x159d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x159d24: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x159d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x159d28: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x159d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x159d2c: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x159d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159d30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x159d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x159d34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159d38: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x159d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x159d3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x159d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159d40: 0xc06390c  jal         func_18E430
    ctx->pc = 0x159D40u;
    SET_GPR_U32(ctx, 31, 0x159D48u);
    ctx->pc = 0x159D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D40u;
    // 0x159d44: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E430u, 0x159D40u, 0x159D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D48u;
label_159d48:
    // 0x159d48: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x159d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x159d4c: 0x3c0501b2  lui         $a1, 0x1B2
    ctx->pc = 0x159d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    // 0x159d50: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x159d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x159d54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x159d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159d58: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x159d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x159d5c: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x159D5Cu;
    SET_GPR_U32(ctx, 31, 0x159D64u);
    ctx->pc = 0x159D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D5Cu;
    // 0x159d60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x159D5Cu, 0x159D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D64u;
label_159d64:
    // 0x159d64: 0xae020340  sw          $v0, 0x340($s0)
    ctx->pc = 0x159d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 2));
    // 0x159d68: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x159d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159d6c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x159d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x159d70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159d74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x159d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x159d78: 0xc063934  jal         func_18E4D0
    ctx->pc = 0x159D78u;
    SET_GPR_U32(ctx, 31, 0x159D80u);
    ctx->pc = 0x159D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D78u;
    // 0x159d7c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E4D0u, 0x159D78u, 0x159D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D80u;
label_159d80:
    // 0x159d80: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x159d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159d84: 0x3c0501b2  lui         $a1, 0x1B2
    ctx->pc = 0x159d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    // 0x159d88: 0x24061f40  addiu       $a2, $zero, 0x1F40
    ctx->pc = 0x159d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x159d8c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x159d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x159d90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159d94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x159d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x159d98: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x159d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159d9c: 0xc063950  jal         func_18E540
    ctx->pc = 0x159D9Cu;
    SET_GPR_U32(ctx, 31, 0x159DA4u);
    ctx->pc = 0x159DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D9Cu;
    // 0x159da0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E540u, 0x159D9Cu, 0x159DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DA4u;
label_159da4:
    // 0x159da4: 0xae020334  sw          $v0, 0x334($s0)
    ctx->pc = 0x159da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x159da8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159dac: 0x24020150  addiu       $v0, $zero, 0x150
    ctx->pc = 0x159dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x159db0: 0xaf828614  sw          $v0, -0x79EC($gp)
    ctx->pc = 0x159db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936084), GPR_U32(ctx, 2));
    // 0x159db4: 0x842295a6  lh          $v0, -0x6A5A($at)
    ctx->pc = 0x159db4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A6u));
    // 0x159db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159dbc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159dc0: 0xa42295a6  sh          $v0, -0x6A5A($at)
    ctx->pc = 0x159dc0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8095A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A6u, _value); } while (0);
    // 0x159dc4: 0x0  nop
    ctx->pc = 0x159dc4u;
    // NOP
label_159dc8:
    // 0x159dc8: 0x8e020340  lw          $v0, 0x340($s0)
    ctx->pc = 0x159dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x159dcc: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x159dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
    // 0x159dd0: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x159dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x159dd4: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x159dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x159dd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x159dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x159ddc: 0xae020330  sw          $v0, 0x330($s0)
    ctx->pc = 0x159ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x159de0: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x159de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159de8: 0xae020320  sw          $v0, 0x320($s0)
    ctx->pc = 0x159de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
    // 0x159dec: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x159decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159df0: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x159df0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x159df4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x159DF4u;
    {
        const bool branch_taken_0x159df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159df4) {
            ctx->pc = 0x159E78u;
            goto label_159e78;
        }
    }
    ctx->pc = 0x159DFCu;
    // 0x159dfc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x159dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x159e00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159e04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x159e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x159e08: 0xc063834  jal         func_18E0D0
    ctx->pc = 0x159E08u;
    SET_GPR_U32(ctx, 31, 0x159E10u);
    ctx->pc = 0x159E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E08u;
    // 0x159e0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E0D0u, 0x159E08u, 0x159E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E10u;
label_159e10:
    // 0x159e10: 0x8e040320  lw          $a0, 0x320($s0)
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159e14: 0x2442e0c0  addiu       $v0, $v0, -0x1F40
    ctx->pc = 0x159e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959296));
    // 0x159e18: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x159e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x159e1c: 0x2446fff0  addiu       $a2, $v0, -0x10
    ctx->pc = 0x159e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x159e20: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x159e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x159e24: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x159e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x159e28: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x159e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x159e2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x159e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x159e30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x159e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x159e34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159e38: 0xc063950  jal         func_18E540
    ctx->pc = 0x159E38u;
    SET_GPR_U32(ctx, 31, 0x159E40u);
    ctx->pc = 0x159E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E38u;
    // 0x159e3c: 0x24441f50  addiu       $a0, $v0, 0x1F50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E540u, 0x159E38u, 0x159E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E40u;
label_159e40:
    // 0x159e40: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x159e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x159e44: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x159e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x159e48: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x159e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x159e4c: 0x3c0501b2  lui         $a1, 0x1B2
    ctx->pc = 0x159e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    // 0x159e50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x159e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159e54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x159e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x159e5c: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x159E5Cu;
    SET_GPR_U32(ctx, 31, 0x159E64u);
    ctx->pc = 0x159E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E5Cu;
    // 0x159e60: 0x24470011  addiu       $a3, $v0, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x159E5Cu, 0x159E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E64u;
label_159e64:
    // 0x159e64: 0xae020340  sw          $v0, 0x340($s0)
    ctx->pc = 0x159e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 2));
    // 0x159e68: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x159e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x159e6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x159E6Cu;
    {
        const bool branch_taken_0x159e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E6Cu;
        // 0x159e70: 0xaf828618  sw          $v0, -0x79E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e6c) {
            ctx->pc = 0x159E88u;
            goto label_159e88;
        }
    }
    ctx->pc = 0x159E74u;
    // 0x159e74: 0x0  nop
    ctx->pc = 0x159e74u;
    // NOP
label_159e78:
    // 0x159e78: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x159e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x159e7c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x159e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x159e80: 0xaf828618  sw          $v0, -0x79E8($gp)
    ctx->pc = 0x159e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 2));
    // 0x159e84: 0x0  nop
    ctx->pc = 0x159e84u;
    // NOP
label_159e88:
    // 0x159e88: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159e8c: 0x842295a6  lh          $v0, -0x6A5A($at)
    ctx->pc = 0x159e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A6u));
    // 0x159e90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159e94: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159e98: 0xa42295a6  sh          $v0, -0x6A5A($at)
    ctx->pc = 0x159e98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8095A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A6u, _value); } while (0);
    // 0x159e9c: 0x0  nop
    ctx->pc = 0x159e9cu;
    // NOP
label_159ea0:
    // 0x159ea0: 0x82020338  lb          $v0, 0x338($s0)
    ctx->pc = 0x159ea0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x159ea4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159EA4u;
    {
        const bool branch_taken_0x159ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EA4u;
        // 0x159ea8: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ea4) {
            ctx->pc = 0x159ED0u;
            goto label_159ed0;
        }
    }
    ctx->pc = 0x159EACu;
    // 0x159eac: 0xc063d48  jal         func_18F520
    ctx->pc = 0x159EACu;
    SET_GPR_U32(ctx, 31, 0x159EB4u);
    ctx->pc = 0x159EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159EACu;
    // 0x159eb0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x159EACu, 0x159EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EB4u;
label_159eb4:
    // 0x159eb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159EB4u;
    {
        const bool branch_taken_0x159eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159eb4) {
            ctx->pc = 0x159ED0u;
            goto label_159ed0;
        }
    }
    ctx->pc = 0x159EBCu;
    // 0x159ebc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x159ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x159ec0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159ec4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x159EC4u;
    {
        const bool branch_taken_0x159ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EC4u;
        // 0x159ec8: 0xa42295a6  sh          $v0, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ec4) {
            ctx->pc = 0x15A030u;
            goto label_15a030;
        }
    }
    ctx->pc = 0x159ECCu;
    // 0x159ecc: 0x0  nop
    ctx->pc = 0x159eccu;
    // NOP
label_159ed0:
    // 0x159ed0: 0x8e04033c  lw          $a0, 0x33C($s0)
    ctx->pc = 0x159ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x159ed4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159ED4u;
    {
        const bool branch_taken_0x159ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ed4) {
            ctx->pc = 0x159EF0u;
            goto label_159ef0;
        }
    }
    ctx->pc = 0x159EDCu;
    // 0x159edc: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x159edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x159ee0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x159ee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x159ee4: 0xc0568d8  jal         func_15A360
    ctx->pc = 0x159EE4u;
    SET_GPR_U32(ctx, 31, 0x159EECu);
    ctx->pc = 0x159EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159EE4u;
    // 0x159ee8: 0x22823  negu        $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A360u, 0x159EE4u, 0x159EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EECu;
label_159eec:
    // 0x159eec: 0x0  nop
    ctx->pc = 0x159eecu;
    // NOP
label_159ef0:
    // 0x159ef0: 0x8e040340  lw          $a0, 0x340($s0)
    ctx->pc = 0x159ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x159ef4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159EF4u;
    {
        const bool branch_taken_0x159ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ef4) {
            ctx->pc = 0x159F10u;
            goto label_159f10;
        }
    }
    ctx->pc = 0x159EFCu;
    // 0x159efc: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x159efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x159f00: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x159f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x159f04: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x159f04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x159f08: 0xc0568d8  jal         func_15A360
    ctx->pc = 0x159F08u;
    SET_GPR_U32(ctx, 31, 0x159F10u);
    ctx->pc = 0x159F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F08u;
    // 0x159f0c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A360u, 0x159F08u, 0x159F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F10u;
label_159f10:
    // 0x159f10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x159f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x159f14: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x159f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x159f18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159F18u;
    {
        const bool branch_taken_0x159f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f18) {
            ctx->pc = 0x159F38u;
            goto label_159f38;
        }
    }
    ctx->pc = 0x159F20u;
    // 0x159f20: 0x8f838614  lw          $v1, -0x79EC($gp)
    ctx->pc = 0x159f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936084)));
    // 0x159f24: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x159f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x159f28: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x159f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x159f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159f30: 0xae020328  sw          $v0, 0x328($s0)
    ctx->pc = 0x159f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 2));
    // 0x159f34: 0x0  nop
    ctx->pc = 0x159f34u;
    // NOP
label_159f38:
    // 0x159f38: 0x8e040328  lw          $a0, 0x328($s0)
    ctx->pc = 0x159f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x159f3c: 0x8f828618  lw          $v0, -0x79E8($gp)
    ctx->pc = 0x159f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
    // 0x159f40: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x159f40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
    // 0x159f44: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x159f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159f48: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x159F48u;
    {
        const bool branch_taken_0x159f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F48u;
        // 0x159f4c: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f48) {
            ctx->pc = 0x159FD8u;
            goto label_159fd8;
        }
    }
    ctx->pc = 0x159F50u;
    // 0x159f50: 0xae020328  sw          $v0, 0x328($s0)
    ctx->pc = 0x159f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 2));
    // 0x159f54: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x159f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159f58: 0x14710009  bne         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x159F58u;
    {
        const bool branch_taken_0x159f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x159f58) {
            ctx->pc = 0x159F80u;
            goto label_159f80;
        }
    }
    ctx->pc = 0x159F60u;
    // 0x159f60: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x159f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x159f64: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159f68: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x159f6c: 0x842295a6  lh          $v0, -0x6A5A($at)
    ctx->pc = 0x159f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A6u));
    // 0x159f70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159f74: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159f78: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x159F78u;
    {
        const bool branch_taken_0x159f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F78u;
        // 0x159f7c: 0xa42295a6  sh          $v0, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f78) {
            ctx->pc = 0x15A030u;
            goto label_15a030;
        }
    }
    ctx->pc = 0x159F80u;
label_159f80:
    // 0x159f80: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x159f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159f84: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x159f84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x159f88: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x159F88u;
    {
        const bool branch_taken_0x159f88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F88u;
        // 0x159f8c: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f88) {
            ctx->pc = 0x159FC8u;
            goto label_159fc8;
        }
    }
    ctx->pc = 0x159F90u;
    // 0x159f90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159f94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x159f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x159f98: 0xc063934  jal         func_18E4D0
    ctx->pc = 0x159F98u;
    SET_GPR_U32(ctx, 31, 0x159FA0u);
    ctx->pc = 0x159F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F98u;
    // 0x159f9c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E4D0u, 0x159F98u, 0x159FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FA0u;
label_159fa0:
    // 0x159fa0: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x159fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159fa4: 0x3c0501b2  lui         $a1, 0x1B2
    ctx->pc = 0x159fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    // 0x159fa8: 0x24061f40  addiu       $a2, $zero, 0x1F40
    ctx->pc = 0x159fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x159fac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x159facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x159fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159fb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x159fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x159fb8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x159fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159fbc: 0xc063950  jal         func_18E540
    ctx->pc = 0x159FBCu;
    SET_GPR_U32(ctx, 31, 0x159FC4u);
    ctx->pc = 0x159FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159FBCu;
    // 0x159fc0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E540u, 0x159FBCu, 0x159FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FC4u;
label_159fc4:
    // 0x159fc4: 0xae020334  sw          $v0, 0x334($s0)
    ctx->pc = 0x159fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
label_159fc8:
    // 0x159fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159fcc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159fd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x159FD0u;
    {
        const bool branch_taken_0x159fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FD0u;
        // 0x159fd4: 0xa42295a6  sh          $v0, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fd0) {
            ctx->pc = 0x15A030u;
            goto label_15a030;
        }
    }
    ctx->pc = 0x159FD8u;
label_159fd8:
    // 0x159fd8: 0x82020338  lb          $v0, 0x338($s0)
    ctx->pc = 0x159fd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x159fdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159FDCu;
    {
        const bool branch_taken_0x159fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FDCu;
        // 0x159fe0: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fdc) {
            ctx->pc = 0x15A008u;
            goto label_15a008;
        }
    }
    ctx->pc = 0x159FE4u;
    // 0x159fe4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x159FE4u;
    SET_GPR_U32(ctx, 31, 0x159FECu);
    ctx->pc = 0x159FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159FE4u;
    // 0x159fe8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x159FE4u, 0x159FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FECu;
label_159fec:
    // 0x159fec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159FECu;
    {
        const bool branch_taken_0x159fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159fec) {
            ctx->pc = 0x15A000u;
            goto label_15a000;
        }
    }
    ctx->pc = 0x159FF4u;
    // 0x159ff4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159ff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x159FF8u;
    {
        const bool branch_taken_0x159ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FF8u;
        // 0x159ffc: 0xae02032c  sw          $v0, 0x32C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ff8) {
            ctx->pc = 0x15A008u;
            goto label_15a008;
        }
    }
    ctx->pc = 0x15A000u;
label_15a000:
    // 0x15a000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a004: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x15a004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
label_15a008:
    // 0x15a008: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x15a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x15a00c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15a010: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x15a010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x15a014: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x15a014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x15a018: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A018u;
    {
        const bool branch_taken_0x15a018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A018u;
        // 0x15a01c: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a018) {
            ctx->pc = 0x15A030u;
            goto label_15a030;
        }
    }
    ctx->pc = 0x15A020u;
    // 0x15a020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a024: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15A024u;
    {
        const bool branch_taken_0x15a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A024u;
        // 0x15a028: 0xa42095a6  sh          $zero, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a024) {
            ctx->pc = 0x15A038u;
            goto label_15a038;
        }
    }
    ctx->pc = 0x15A02Cu;
    // 0x15a02c: 0x0  nop
    ctx->pc = 0x15a02cu;
    // NOP
label_15a030:
    // 0x15a030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15a030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a034: 0x0  nop
    ctx->pc = 0x15a034u;
    // NOP
label_15a038:
    // 0x15a038: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15a038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a03c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a03cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a048: 0x3e00008  jr          $ra
    ctx->pc = 0x15A048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A048u;
        // 0x15a04c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A050u;
}
