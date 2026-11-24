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

// Function: sub_0021FE98
// Address: 0x21fe98 - 0x21ff2c
void sub_0021FE98_0x21fe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FE98_0x21fe98");
#endif

    switch (ctx->pc) {
        case 0x21febcu: goto label_21febc;
        default: break;
    }

    ctx->pc = 0x21fe98u;

    // 0x21fe98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fe9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21fea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21fea8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21fea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21feac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21feacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21feb0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21feb4: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21FEB4u;
    SET_GPR_U32(ctx, 31, 0x21FEBCu);
    ctx->pc = 0x21FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEB4u;
    // 0x21feb8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21FEB4u, 0x21FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEBCu;
label_21febc:
    // 0x21febc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21febcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21fec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fec4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FEC4u;
    {
        const bool branch_taken_0x21fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC4u;
        // 0x21fec8: 0x34a5011c  ori         $a1, $a1, 0x11C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)284);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fec4) {
            ctx->pc = 0x21FEE8u;
            goto label_21fee8;
        }
    }
    ctx->pc = 0x21FECCu;
    // 0x21fecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21feccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fed0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fed4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21fed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fed8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21fed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fedc: 0x80848e0  j           func_212380
    ctx->pc = 0x21FEDCu;
    ctx->pc = 0x21FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEDCu;
    // 0x21fee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21FEE4u;
    // 0x21fee4: 0x0  nop
    ctx->pc = 0x21fee4u;
    // NOP
label_21fee8:
    // 0x21fee8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x21fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x21feec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FEECu;
    {
        const bool branch_taken_0x21feec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEECu;
        // 0x21fef0: 0x2602010c  addiu       $v0, $s0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21feec) {
            ctx->pc = 0x21FF08u;
            goto label_21ff08;
        }
    }
    ctx->pc = 0x21FEF4u;
    // 0x21fef4: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x21fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x21fef8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x21fefc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21FEFCu;
    {
        const bool branch_taken_0x21fefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEFCu;
        // 0x21ff00: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fefc) {
            ctx->pc = 0x21FF10u;
            goto label_21ff10;
        }
    }
    ctx->pc = 0x21FF04u;
    // 0x21ff04: 0x0  nop
    ctx->pc = 0x21ff04u;
    // NOP
label_21ff08:
    // 0x21ff08: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x21ff0c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x21ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_21ff10:
    // 0x21ff10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ff10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ff14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21ff14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ff18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ff1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21ff1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ff20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21ff20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ff24: 0x3e00008  jr          $ra
    ctx->pc = 0x21FF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF24u;
        // 0x21ff28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FF2Cu;
}
