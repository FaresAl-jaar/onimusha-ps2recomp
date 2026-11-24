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

// Function: sub_00212088
// Address: 0x212088 - 0x2120c0
void sub_00212088_0x212088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212088_0x212088");
#endif

    switch (ctx->pc) {
        case 0x212088u: goto label_212088;
        case 0x21208cu: goto label_21208c;
        case 0x212090u: goto label_212090;
        case 0x212094u: goto label_212094;
        case 0x212098u: goto label_212098;
        case 0x21209cu: goto label_21209c;
        case 0x2120a0u: goto label_2120a0;
        case 0x2120a4u: goto label_2120a4;
        case 0x2120a8u: goto label_2120a8;
        case 0x2120acu: goto label_2120ac;
        case 0x2120b0u: goto label_2120b0;
        case 0x2120b4u: goto label_2120b4;
        case 0x2120b8u: goto label_2120b8;
        case 0x2120bcu: goto label_2120bc;
        default: break;
    }

    ctx->pc = 0x212088u;

label_212088:
    // 0x212088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21208c:
    // 0x21208c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x21208cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_212090:
    // 0x212090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x212090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_212094:
    // 0x212094: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x212094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_212098:
    // 0x212098: 0x40f809  jalr        $v0
label_21209c:
    if (ctx->pc == 0x21209Cu) {
        ctx->pc = 0x21209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212098u;
        // 0x21209c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120A0u;
        goto label_2120a0;
    }
    ctx->pc = 0x212098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2120A0u);
        ctx->pc = 0x21209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212098u;
        // 0x21209c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212098u, 0x2120A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2120A0u;
label_2120a0:
    // 0x2120a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2120a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2120a4:
    // 0x2120a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2120a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2120a8:
    // 0x2120a8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2120a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_2120ac:
    // 0x2120ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2120acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2120b0:
    // 0x2120b0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2120b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2120b4:
    // 0x2120b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2120b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2120b8:
    // 0x2120b8: 0x3e00008  jr          $ra
label_2120bc:
    if (ctx->pc == 0x2120BCu) {
        ctx->pc = 0x2120BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120B8u;
        // 0x2120bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120C0u;
        goto label_fallthrough_0x2120b8;
    }
    ctx->pc = 0x2120B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2120BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120B8u;
        // 0x2120bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2120b8:
    ctx->pc = 0x2120C0u;
}
