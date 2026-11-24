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

// Function: sub_0034CBF0
// Address: 0x34cbf0 - 0x34cce8
void sub_0034CBF0_0x34cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CBF0_0x34cbf0");
#endif

    switch (ctx->pc) {
        case 0x34cc48u: goto label_34cc48;
        case 0x34cc70u: goto label_34cc70;
        case 0x34cc9cu: goto label_34cc9c;
        default: break;
    }

    ctx->pc = 0x34cbf0u;

    // 0x34cbf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x34cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x34cbf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x34cbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x34cbf8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34cbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x34cbfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34cbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x34cc00: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x34cc00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34cc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34cc08: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x34cc08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34cc10: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x34cc10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34cc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34cc18: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34cc18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc1c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34cc1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34cc24: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x34cc24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x34cc28: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x34cc28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc2c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x34cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x34cc30: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34cc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34cc34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34cc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cc38: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x34cc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x34cc3c: 0x2508cb80  addiu       $t0, $t0, -0x3480
    ctx->pc = 0x34cc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953856));
    // 0x34cc40: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x34CC40u;
    SET_GPR_U32(ctx, 31, 0x34CC48u);
    ctx->pc = 0x34CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC40u;
    // 0x34cc44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x34CC40u, 0x34CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC48u;
label_34cc48:
    // 0x34cc48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34cc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc4c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x34CC4Cu;
    {
        const bool branch_taken_0x34cc4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC4Cu;
        // 0x34cc50: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cc4c) {
            ctx->pc = 0x34CCB8u;
            goto label_34ccb8;
        }
    }
    ctx->pc = 0x34CC54u;
    // 0x34cc54: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x34cc54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc58: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x34cc58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc5c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x34cc5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34cc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34cc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cc68: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x34CC68u;
    SET_GPR_U32(ctx, 31, 0x34CC70u);
    ctx->pc = 0x34CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC68u;
    // 0x34cc6c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x34CC68u, 0x34CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC70u;
label_34cc70:
    // 0x34cc70: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x34cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x34cc74: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x34cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x34cc78: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x34cc78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x34cc7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34cc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc80: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x34cc80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x34cc84: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34cc88: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x34cc88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x34cc8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34cc90: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x34cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cc94: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x34CC94u;
    SET_GPR_U32(ctx, 31, 0x34CC9Cu);
    ctx->pc = 0x34CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC94u;
    // 0x34cc98: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x34CC94u, 0x34CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC9Cu;
label_34cc9c:
    // 0x34cc9c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x34cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x34cca0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34cca4: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x34cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x34cca8: 0xa2120558  sb          $s2, 0x558($s0)
    ctx->pc = 0x34cca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 18));
    // 0x34ccac: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x34ccacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x34ccb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34CCB0u;
    {
        const bool branch_taken_0x34ccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CCB0u;
        // 0x34ccb4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ccb0) {
            ctx->pc = 0x34CCC0u;
            goto label_34ccc0;
        }
    }
    ctx->pc = 0x34CCB8u;
label_34ccb8:
    // 0x34ccb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34ccb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ccbc: 0x0  nop
    ctx->pc = 0x34ccbcu;
    // NOP
label_34ccc0:
    // 0x34ccc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x34ccc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34ccc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34ccc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34ccc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34ccc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34cccc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34ccccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34ccd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34ccd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34ccd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34ccd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ccd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34ccd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ccdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ccdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cce0: 0x3e00008  jr          $ra
    ctx->pc = 0x34CCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CCE0u;
        // 0x34cce4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CCE8u;
}
