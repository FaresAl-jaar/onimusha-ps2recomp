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

// Function: sub_001FA970
// Address: 0x1fa970 - 0x1faa10
void sub_001FA970_0x1fa970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA970_0x1fa970");
#endif

    switch (ctx->pc) {
        case 0x1fa9b0u: goto label_1fa9b0;
        case 0x1fa9ecu: goto label_1fa9ec;
        default: break;
    }

    ctx->pc = 0x1fa970u;

    // 0x1fa970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa974: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fa974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa97c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa980: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1fa984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa988: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x1fa988u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1fa98c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fa990: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1fa990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1fa994: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1fa994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa998: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x1fa998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fa99c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FA99Cu;
    {
        const bool branch_taken_0x1fa99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA99Cu;
        // 0x1fa9a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa99c) {
            ctx->pc = 0x1FA9CCu;
            goto label_1fa9cc;
        }
    }
    ctx->pc = 0x1FA9A4u;
    // 0x1fa9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa9a8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1fa9a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa9ac: 0x0  nop
    ctx->pc = 0x1fa9acu;
    // NOP
label_1fa9b0:
    // 0x1fa9b0: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1fa9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1fa9b4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1fa9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1fa9b8: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x1fa9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fa9bc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fa9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fa9c0: 0x0  nop
    ctx->pc = 0x1fa9c0u;
    // NOP
    // 0x1fa9c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FA9C4u;
    {
        const bool branch_taken_0x1fa9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9C4u;
        // 0x1fa9c8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9c4) {
            ctx->pc = 0x1FA9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa9b0;
        }
    }
    ctx->pc = 0x1FA9CCu;
label_1fa9cc:
    // 0x1fa9cc: 0x2623003f  addiu       $v1, $s1, 0x3F
    ctx->pc = 0x1fa9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x1fa9d0: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1fa9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fa9d4: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x1fa9d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fa9d8: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x1fa9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1fa9dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fa9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa9e0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1fa9e4: 0xc049590  jal         func_125640
    ctx->pc = 0x1FA9E4u;
    SET_GPR_U32(ctx, 31, 0x1FA9ECu);
    ctx->pc = 0x1FA9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA9E4u;
    // 0x1fa9e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1FA9E4u, 0x1FA9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA9ECu;
label_1fa9ec:
    // 0x1fa9ec: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x1fa9f0: 0x24633ee0  addiu       $v1, $v1, 0x3EE0
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16096));
    // 0x1fa9f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa9f8: 0xac710044  sw          $s1, 0x44($v1)
    ctx->pc = 0x1fa9f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x873F24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x873F24u, _value); } while (0);
    // 0x1fa9fc: 0xac700040  sw          $s0, 0x40($v1)
    ctx->pc = 0x1fa9fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x873F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x873F20u, _value); } while (0);
    // 0x1faa00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faa00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faa04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1faa04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faa08: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA08u;
        // 0x1faa0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAA10u;
}
