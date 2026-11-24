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

// Function: sub_00204068
// Address: 0x204068 - 0x2040ec
void sub_00204068_0x204068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204068_0x204068");
#endif

    switch (ctx->pc) {
        case 0x204088u: goto label_204088;
        case 0x2040c4u: goto label_2040c4;
        default: break;
    }

    ctx->pc = 0x204068u;

    // 0x204068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20406c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204070: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x204070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x204074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x204078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20407c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x204080: 0xc081c12  jal         func_207048
    ctx->pc = 0x204080u;
    SET_GPR_U32(ctx, 31, 0x204088u);
    ctx->pc = 0x204084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204080u;
    // 0x204084: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x204080u, 0x204088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204088u;
label_204088:
    // 0x204088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x204088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20408c: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x20408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x204090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204098: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204098u;
    {
        const bool branch_taken_0x204098 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204098u;
        // 0x20409c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204098) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x2040A0u;
    // 0x2040a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2040a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2040a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2040a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2040a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2040a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2040ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2040acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2040b0: 0x8084aee  j           func_212BB8
    ctx->pc = 0x2040B0u;
    ctx->pc = 0x2040B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040B0u;
    // 0x2040b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BB8u;
    sub_00212BB8_0x212bb8(rdram, ctx, runtime); return;
    ctx->pc = 0x2040B8u;
label_2040b8:
    // 0x2040b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2040b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040bc: 0xc080754  jal         func_201D50
    ctx->pc = 0x2040BCu;
    SET_GPR_U32(ctx, 31, 0x2040C4u);
    ctx->pc = 0x2040C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040BCu;
    // 0x2040c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D50u, 0x2040BCu, 0x2040C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040C4u;
label_2040c4:
    // 0x2040c4: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x2040c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x2040c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2040c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2040ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2040d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2040d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2040d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2040d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2040d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2040dc: 0x24a54130  addiu       $a1, $a1, 0x4130
    ctx->pc = 0x2040dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16688));
    // 0x2040e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2040e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2040e4: 0x8084aee  j           func_212BB8
    ctx->pc = 0x2040E4u;
    ctx->pc = 0x2040E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040E4u;
    // 0x2040e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BB8u;
    sub_00212BB8_0x212bb8(rdram, ctx, runtime); return;
    ctx->pc = 0x2040ECu;
}
