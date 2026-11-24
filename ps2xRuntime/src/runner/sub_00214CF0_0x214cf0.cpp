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

// Function: sub_00214CF0
// Address: 0x214cf0 - 0x214d5c
void sub_00214CF0_0x214cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214CF0_0x214cf0");
#endif

    switch (ctx->pc) {
        case 0x214d10u: goto label_214d10;
        case 0x214d40u: goto label_214d40;
        default: break;
    }

    ctx->pc = 0x214cf0u;

    // 0x214cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214cf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x214cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214d00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214d08: 0xc084968  jal         func_2125A0
    ctx->pc = 0x214D08u;
    SET_GPR_U32(ctx, 31, 0x214D10u);
    ctx->pc = 0x214D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D08u;
    // 0x214d0c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x214D08u, 0x214D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D10u;
label_214d10:
    // 0x214d10: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x214d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x214d14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x214D14u;
    {
        const bool branch_taken_0x214d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D14u;
        // 0x214d18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d14) {
            ctx->pc = 0x214D38u;
            goto label_214d38;
        }
    }
    ctx->pc = 0x214D1Cu;
    // 0x214d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214d20: 0x34a50182  ori         $a1, $a1, 0x182
    ctx->pc = 0x214d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)386);
    // 0x214d24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214d2c: 0x80848e0  j           func_212380
    ctx->pc = 0x214D2Cu;
    ctx->pc = 0x214D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D2Cu;
    // 0x214d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x214D34u;
    // 0x214d34: 0x0  nop
    ctx->pc = 0x214d34u;
    // NOP
label_214d38:
    // 0x214d38: 0xc0867ea  jal         func_219FA8
    ctx->pc = 0x214D38u;
    SET_GPR_U32(ctx, 31, 0x214D40u);
    ctx->pc = 0x214D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D38u;
    // 0x214d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219FA8u, 0x214D38u, 0x214D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D40u;
label_214d40:
    // 0x214d40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x214d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x214d44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214d4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214d54: 0x3e00008  jr          $ra
    ctx->pc = 0x214D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D54u;
        // 0x214d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214D5Cu;
}
