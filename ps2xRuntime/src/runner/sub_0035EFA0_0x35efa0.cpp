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

// Function: sub_0035EFA0
// Address: 0x35efa0 - 0x35f050
void sub_0035EFA0_0x35efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EFA0_0x35efa0");
#endif

    switch (ctx->pc) {
        case 0x35efccu: goto label_35efcc;
        case 0x35efd8u: goto label_35efd8;
        case 0x35f010u: goto label_35f010;
        default: break;
    }

    ctx->pc = 0x35efa0u;

    // 0x35efa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35efa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35efa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35efac: 0x24061f80  addiu       $a2, $zero, 0x1F80
    ctx->pc = 0x35efacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8064));
    // 0x35efb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35efb4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x35efb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35efb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35efb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efbc: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x35efbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35efc0: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x35efc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x35efc4: 0xc049590  jal         func_125640
    ctx->pc = 0x35EFC4u;
    SET_GPR_U32(ctx, 31, 0x35EFCCu);
    ctx->pc = 0x35EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EFC4u;
    // 0x35efc8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x35EFC4u, 0x35EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EFCCu;
label_35efcc:
    // 0x35efcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35efccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35efd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efd4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x35efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35efd8:
    // 0x35efd8: 0xaca41890  sw          $a0, 0x1890($a1)
    ctx->pc = 0x35efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6288), GPR_U32(ctx, 4));
    // 0x35efdc: 0xaca41894  sw          $a0, 0x1894($a1)
    ctx->pc = 0x35efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6292), GPR_U32(ctx, 4));
    // 0x35efe0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x35efe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x35efe4: 0xaca41898  sw          $a0, 0x1898($a1)
    ctx->pc = 0x35efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6296), GPR_U32(ctx, 4));
    // 0x35efe8: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x35efe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x35efec: 0xaca4189c  sw          $a0, 0x189C($a1)
    ctx->pc = 0x35efecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6300), GPR_U32(ctx, 4));
    // 0x35eff0: 0xaca418a0  sw          $a0, 0x18A0($a1)
    ctx->pc = 0x35eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6304), GPR_U32(ctx, 4));
    // 0x35eff4: 0xaca418a4  sw          $a0, 0x18A4($a1)
    ctx->pc = 0x35eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6308), GPR_U32(ctx, 4));
    // 0x35eff8: 0xaca418a8  sw          $a0, 0x18A8($a1)
    ctx->pc = 0x35eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6312), GPR_U32(ctx, 4));
    // 0x35effc: 0xaca418ac  sw          $a0, 0x18AC($a1)
    ctx->pc = 0x35effcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6316), GPR_U32(ctx, 4));
    // 0x35f000: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x35F000u;
    {
        const bool branch_taken_0x35f000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F000u;
        // 0x35f004: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f000) {
            ctx->pc = 0x35EFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35efd8;
        }
    }
    ctx->pc = 0x35F008u;
    // 0x35f008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f00c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x35f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f010:
    // 0x35f010: 0xae040690  sw          $a0, 0x690($s0)
    ctx->pc = 0x35f010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 4));
    // 0x35f014: 0xae040694  sw          $a0, 0x694($s0)
    ctx->pc = 0x35f014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 4));
    // 0x35f018: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x35f018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x35f01c: 0xae040698  sw          $a0, 0x698($s0)
    ctx->pc = 0x35f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 4));
    // 0x35f020: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x35f020u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x35f024: 0xae04069c  sw          $a0, 0x69C($s0)
    ctx->pc = 0x35f024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1692), GPR_U32(ctx, 4));
    // 0x35f028: 0xae0406a0  sw          $a0, 0x6A0($s0)
    ctx->pc = 0x35f028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 4));
    // 0x35f02c: 0xae0406a4  sw          $a0, 0x6A4($s0)
    ctx->pc = 0x35f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 4));
    // 0x35f030: 0xae0406a8  sw          $a0, 0x6A8($s0)
    ctx->pc = 0x35f030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 4));
    // 0x35f034: 0xae0406ac  sw          $a0, 0x6AC($s0)
    ctx->pc = 0x35f034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1708), GPR_U32(ctx, 4));
    // 0x35f038: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x35F038u;
    {
        const bool branch_taken_0x35f038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F038u;
        // 0x35f03c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f038) {
            ctx->pc = 0x35F010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f010;
        }
    }
    ctx->pc = 0x35F040u;
    // 0x35f040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35f040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f048: 0x3e00008  jr          $ra
    ctx->pc = 0x35F048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F048u;
        // 0x35f04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F050u;
}
