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

// Function: sub_00207FA8
// Address: 0x207fa8 - 0x208028
void sub_00207FA8_0x207fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207FA8_0x207fa8");
#endif

    switch (ctx->pc) {
        case 0x207fc8u: goto label_207fc8;
        case 0x208000u: goto label_208000;
        default: break;
    }

    ctx->pc = 0x207fa8u;

    // 0x207fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207fb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x207fbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x207fc0: 0xc081d84  jal         func_207610
    ctx->pc = 0x207FC0u;
    SET_GPR_U32(ctx, 31, 0x207FC8u);
    ctx->pc = 0x207FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FC0u;
    // 0x207fc4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207FC0u, 0x207FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FC8u;
label_207fc8:
    // 0x207fc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x207fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207fd0: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207FD0u;
    {
        const bool branch_taken_0x207fd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x207FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FD0u;
        // 0x207fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fd0) {
            ctx->pc = 0x207FF8u;
            goto label_207ff8;
        }
    }
    ctx->pc = 0x207FD8u;
    // 0x207fd8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207fe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207fe4: 0x24847a70  addiu       $a0, $a0, 0x7A70
    ctx->pc = 0x207fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31344));
    // 0x207fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207fec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207ff0: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x207FF0u;
    ctx->pc = 0x207FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FF0u;
    // 0x207ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x207FF8u;
label_207ff8:
    // 0x207ff8: 0xc081c12  jal         func_207048
    ctx->pc = 0x207FF8u;
    SET_GPR_U32(ctx, 31, 0x208000u);
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x207FF8u, 0x208000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208000u;
label_208000:
    // 0x208000: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x208000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x208004: 0x2513026  xor         $a2, $s2, $s1
    ctx->pc = 0x208004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 17));
    // 0x208008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20800c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20800cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208014: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208018: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x208018u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20801c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20801cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208020: 0x8087e0e  j           func_21F838
    ctx->pc = 0x208020u;
    ctx->pc = 0x208024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208020u;
    // 0x208024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x208028u;
}
