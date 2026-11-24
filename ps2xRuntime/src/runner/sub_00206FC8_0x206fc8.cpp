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

// Function: sub_00206FC8
// Address: 0x206fc8 - 0x207028
void sub_00206FC8_0x206fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206FC8_0x206fc8");
#endif

    switch (ctx->pc) {
        case 0x206fe4u: goto label_206fe4;
        default: break;
    }

    ctx->pc = 0x206fc8u;

    // 0x206fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206fd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x206fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206fdc: 0xc081d84  jal         func_207610
    ctx->pc = 0x206FDCu;
    SET_GPR_U32(ctx, 31, 0x206FE4u);
    ctx->pc = 0x206FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FDCu;
    // 0x206fe0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x206FDCu, 0x206FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FE4u;
label_206fe4:
    // 0x206fe4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x206fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x206fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206fec: 0x24847558  addiu       $a0, $a0, 0x7558
    ctx->pc = 0x206fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30040));
    // 0x206ff0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ff4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x206FF4u;
    {
        const bool branch_taken_0x206ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x206FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FF4u;
        // 0x206ff8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ff4) {
            ctx->pc = 0x207010u;
            goto label_207010;
        }
    }
    ctx->pc = 0x206FFCu;
    // 0x206ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207008: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x207008u;
    ctx->pc = 0x20700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207008u;
    // 0x20700c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x207010u;
label_207010:
    // 0x207010: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x207010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x207014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20701c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20701cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207020: 0x8087e0e  j           func_21F838
    ctx->pc = 0x207020u;
    ctx->pc = 0x207024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207020u;
    // 0x207024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x207028u;
}
