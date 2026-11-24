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

// Function: sub_0024E968
// Address: 0x24e968 - 0x24e9e8
void sub_0024E968_0x24e968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E968_0x24e968");
#endif

    switch (ctx->pc) {
        case 0x24e9bcu: goto label_24e9bc;
        default: break;
    }

    ctx->pc = 0x24e968u;

    // 0x24e968: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e96c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24e96cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24e970: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24e970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24e974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e978: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24e97c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E97Cu;
    {
        const bool branch_taken_0x24e97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E97Cu;
        // 0x24e980: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e97c) {
            ctx->pc = 0x24E994u;
            goto label_24e994;
        }
    }
    ctx->pc = 0x24E984u;
    // 0x24e984: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e988: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e988u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e98c: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24E98Cu;
    {
        const bool branch_taken_0x24e98c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E98Cu;
        // 0x24e990: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e98c) {
            ctx->pc = 0x24E9DCu;
            goto label_24e9dc;
        }
    }
    ctx->pc = 0x24E994u;
label_24e994:
    // 0x24e994: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e998: 0x24507500  addiu       $s0, $v0, 0x7500
    ctx->pc = 0x24e998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x24e99c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D7500u));
    // 0x24e9a0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24E9A0u;
    {
        const bool branch_taken_0x24e9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9A0u;
        // 0x24e9a4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9a0) {
            ctx->pc = 0x24E9D8u;
            goto label_24e9d8;
        }
    }
    ctx->pc = 0x24E9A8u;
    // 0x24e9a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24e9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9b0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x24e9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9b4: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24E9B4u;
    SET_GPR_U32(ctx, 31, 0x24E9BCu);
    ctx->pc = 0x24E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9B4u;
    // 0x24e9b8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24E9B4u, 0x24E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9BCu;
label_24e9bc:
    // 0x24e9bc: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24e9c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e9c4: 0x24637510  addiu       $v1, $v1, 0x7510
    ctx->pc = 0x24e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29968));
    // 0x24e9c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x24e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24e9cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24e9ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D7510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7510u, _value); } while (0);
    // 0x24e9d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24e9d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4D7514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7514u, _value); } while (0);
    // 0x24e9d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_24e9d8:
    // 0x24e9d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e9dc:
    // 0x24e9dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24e9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24e9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x24E9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9E0u;
        // 0x24e9e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E9E8u;
}
