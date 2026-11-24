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

// Function: sub_00224AB0
// Address: 0x224ab0 - 0x224b20
void sub_00224AB0_0x224ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224AB0_0x224ab0");
#endif

    switch (ctx->pc) {
        case 0x224ad8u: goto label_224ad8;
        case 0x224af0u: goto label_224af0;
        default: break;
    }

    ctx->pc = 0x224ab0u;

    // 0x224ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224ab4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224ab8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224ac0: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224ac0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224ac4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x224ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x224ac8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224acc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224ad0: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224AD0u;
    SET_GPR_U32(ctx, 31, 0x224AD8u);
    ctx->pc = 0x224AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224AD0u;
    // 0x224ad4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224AD0u, 0x224AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AD8u;
label_224ad8:
    // 0x224ad8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ae0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x224AE0u;
    {
        const bool branch_taken_0x224ae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AE0u;
        // 0x224ae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ae0) {
            ctx->pc = 0x224B08u;
            goto label_224b08;
        }
    }
    ctx->pc = 0x224AE8u;
    // 0x224ae8: 0xc089396  jal         func_224E58
    ctx->pc = 0x224AE8u;
    SET_GPR_U32(ctx, 31, 0x224AF0u);
    ctx->pc = 0x224E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E58u, 0x224AE8u, 0x224AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AF0u;
label_224af0:
    // 0x224af0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224AF0u;
    {
        const bool branch_taken_0x224af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AF0u;
        // 0x224af4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224af0) {
            ctx->pc = 0x224B0Cu;
            goto label_224b0c;
        }
    }
    ctx->pc = 0x224AF8u;
    // 0x224af8: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x224af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x224afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224b00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x224b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x224b04: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x224b04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_224b08:
    // 0x224b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224b0c:
    // 0x224b0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224b10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224b14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224b18: 0x3e00008  jr          $ra
    ctx->pc = 0x224B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B18u;
        // 0x224b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224B20u;
}
