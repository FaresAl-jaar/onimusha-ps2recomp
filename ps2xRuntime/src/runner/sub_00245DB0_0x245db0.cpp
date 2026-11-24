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

// Function: sub_00245DB0
// Address: 0x245db0 - 0x245ebc
void sub_00245DB0_0x245db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245DB0_0x245db0");
#endif

    switch (ctx->pc) {
        case 0x245dd8u: goto label_245dd8;
        case 0x245df4u: goto label_245df4;
        case 0x245e10u: goto label_245e10;
        case 0x245e18u: goto label_245e18;
        case 0x245e28u: goto label_245e28;
        case 0x245e58u: goto label_245e58;
        case 0x245e74u: goto label_245e74;
        default: break;
    }

    ctx->pc = 0x245db0u;

    // 0x245db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245db8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x245db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245dbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245dc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x245dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x245dc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x245dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x245dcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x245dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x245dd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x245DD0u;
    {
        const bool branch_taken_0x245dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DD0u;
        // 0x245dd4: 0x3c13004d  lui         $s3, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245dd0) {
            ctx->pc = 0x245DE0u;
            goto label_245de0;
        }
    }
    ctx->pc = 0x245DD8u;
label_245dd8:
    // 0x245dd8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x245dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x245ddc: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x245ddcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_245de0:
    // 0x245de0: 0x2a0203e8  slti        $v0, $s0, 0x3E8
    ctx->pc = 0x245de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x245de4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x245DE4u;
    {
        const bool branch_taken_0x245de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245de4) {
            ctx->pc = 0x245DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245DE4u;
            // 0x245de8: 0x82320002  lb          $s2, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245E2Cu;
            goto label_245e2c;
        }
    }
    ctx->pc = 0x245DECu;
    // 0x245dec: 0xc094ba8  jal         func_252EA0
    ctx->pc = 0x245DECu;
    SET_GPR_U32(ctx, 31, 0x245DF4u);
    ctx->pc = 0x252EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EA0u, 0x245DECu, 0x245DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DF4u;
label_245df4:
    // 0x245df4: 0x2664e9bc  addiu       $a0, $s3, -0x1644
    ctx->pc = 0x245df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961596));
    // 0x245df8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x245df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x245dfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245e00: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x245E00u;
    {
        const bool branch_taken_0x245e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x245e00) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245E08u;
    // 0x245e08: 0xc094bae  jal         func_252EB8
    ctx->pc = 0x245E08u;
    SET_GPR_U32(ctx, 31, 0x245E10u);
    ctx->pc = 0x252EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EB8u, 0x245E08u, 0x245E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E10u;
label_245e10:
    // 0x245e10: 0xc0916f8  jal         func_245BE0
    ctx->pc = 0x245E10u;
    SET_GPR_U32(ctx, 31, 0x245E18u);
    ctx->pc = 0x245BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245BE0u, 0x245E10u, 0x245E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E18u;
label_245e18:
    // 0x245e18: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x245E18u;
    {
        const bool branch_taken_0x245e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E18u;
        // 0x245e1c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e18) {
            ctx->pc = 0x245DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245dd8;
        }
    }
    ctx->pc = 0x245E20u;
label_245e20:
    // 0x245e20: 0xc094bae  jal         func_252EB8
    ctx->pc = 0x245E20u;
    SET_GPR_U32(ctx, 31, 0x245E28u);
    ctx->pc = 0x245E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E20u;
    // 0x245e24: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EB8u, 0x245E20u, 0x245E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E28u;
label_245e28:
    // 0x245e28: 0x82320002  lb          $s2, 0x2($s1)
    ctx->pc = 0x245e28u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_245e2c:
    // 0x245e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x245e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245e30: 0x5642001b  bnel        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x245E30u;
    {
        const bool branch_taken_0x245e30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x245e30) {
            ctx->pc = 0x245E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245E30u;
            // 0x245e34: 0xae60e9bc  sw          $zero, -0x1644($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294961596), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245EA0u;
            goto label_245ea0;
        }
    }
    ctx->pc = 0x245E38u;
    // 0x245e38: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x245e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x245e3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x245e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245e40: 0x2450e980  addiu       $s0, $v0, -0x1680
    ctx->pc = 0x245e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961536));
    // 0x245e44: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x245e44u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x4CE981u));
    // 0x245e48: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245E48u;
    {
        const bool branch_taken_0x245e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x245E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E48u;
        // 0x245e4c: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e48) {
            ctx->pc = 0x245E5Cu;
            goto label_245e5c;
        }
    }
    ctx->pc = 0x245E50u;
    // 0x245e50: 0xc091704  jal         func_245C10
    ctx->pc = 0x245E50u;
    SET_GPR_U32(ctx, 31, 0x245E58u);
    ctx->pc = 0x245E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E50u;
    // 0x245e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C10u, 0x245E50u, 0x245E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E58u;
label_245e58:
    // 0x245e58: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x245e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_245e5c:
    // 0x245e5c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x245e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x245e60: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x245e60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x245e64: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x245E64u;
    {
        const bool branch_taken_0x245e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x245e64) {
            ctx->pc = 0x245E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245E64u;
            // 0x245e68: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245E78u;
            goto label_245e78;
        }
    }
    ctx->pc = 0x245E6Cu;
    // 0x245e6c: 0xc09170e  jal         func_245C38
    ctx->pc = 0x245E6Cu;
    SET_GPR_U32(ctx, 31, 0x245E74u);
    ctx->pc = 0x245E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E6Cu;
    // 0x245e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C38u, 0x245E6Cu, 0x245E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E74u;
label_245e74:
    // 0x245e74: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x245e74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_245e78:
    // 0x245e78: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x245e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x245e7c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x245E7Cu;
    {
        const bool branch_taken_0x245e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x245E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E7Cu;
        // 0x245e80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e7c) {
            ctx->pc = 0x245E9Cu;
            goto label_245e9c;
        }
    }
    ctx->pc = 0x245E84u;
    // 0x245e84: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x245e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x245e88: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x245e88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x245e8c: 0x2463e9dc  addiu       $v1, $v1, -0x1624
    ctx->pc = 0x245e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961628));
    // 0x245e90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x245e90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9DCu));
    // 0x245e94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245e98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x245e98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4CE9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9DCu, _value); } while (0);
label_245e9c:
    // 0x245e9c: 0xae60e9bc  sw          $zero, -0x1644($s3)
    ctx->pc = 0x245e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294961596), GPR_U32(ctx, 0));
label_245ea0:
    // 0x245ea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245ea4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245ea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245ea8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x245ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245eac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x245eacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245eb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x245eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x245EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EB4u;
        // 0x245eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245EBCu;
}
