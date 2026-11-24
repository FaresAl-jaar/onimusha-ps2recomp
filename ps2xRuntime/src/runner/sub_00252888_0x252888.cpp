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

// Function: sub_00252888
// Address: 0x252888 - 0x252924
void sub_00252888_0x252888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252888_0x252888");
#endif

    switch (ctx->pc) {
        case 0x252888u: goto label_252888;
        case 0x25288cu: goto label_25288c;
        case 0x252890u: goto label_252890;
        case 0x252894u: goto label_252894;
        case 0x252898u: goto label_252898;
        case 0x25289cu: goto label_25289c;
        case 0x2528a0u: goto label_2528a0;
        case 0x2528a4u: goto label_2528a4;
        case 0x2528a8u: goto label_2528a8;
        case 0x2528acu: goto label_2528ac;
        case 0x2528b0u: goto label_2528b0;
        case 0x2528b4u: goto label_2528b4;
        case 0x2528b8u: goto label_2528b8;
        case 0x2528bcu: goto label_2528bc;
        case 0x2528c0u: goto label_2528c0;
        case 0x2528c4u: goto label_2528c4;
        case 0x2528c8u: goto label_2528c8;
        case 0x2528ccu: goto label_2528cc;
        case 0x2528d0u: goto label_2528d0;
        case 0x2528d4u: goto label_2528d4;
        case 0x2528d8u: goto label_2528d8;
        case 0x2528dcu: goto label_2528dc;
        case 0x2528e0u: goto label_2528e0;
        case 0x2528e4u: goto label_2528e4;
        case 0x2528e8u: goto label_2528e8;
        case 0x2528ecu: goto label_2528ec;
        case 0x2528f0u: goto label_2528f0;
        case 0x2528f4u: goto label_2528f4;
        case 0x2528f8u: goto label_2528f8;
        case 0x2528fcu: goto label_2528fc;
        case 0x252900u: goto label_252900;
        case 0x252904u: goto label_252904;
        case 0x252908u: goto label_252908;
        case 0x25290cu: goto label_25290c;
        case 0x252910u: goto label_252910;
        case 0x252914u: goto label_252914;
        case 0x252918u: goto label_252918;
        case 0x25291cu: goto label_25291c;
        case 0x252920u: goto label_252920;
        default: break;
    }

    ctx->pc = 0x252888u;

label_252888:
    // 0x252888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25288c:
    // 0x25288c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_252890:
    // 0x252890: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x252890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_252894:
    // 0x252894: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x252894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_252898:
    // 0x252898: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_25289c:
    if (ctx->pc == 0x25289Cu) {
        ctx->pc = 0x25289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252898u;
        // 0x25289c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528A0u;
        goto label_2528a0;
    }
    ctx->pc = 0x252898u;
    {
        const bool branch_taken_0x252898 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252898u;
        // 0x25289c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252898) {
            ctx->pc = 0x2528C0u;
            goto label_2528c0;
        }
    }
    ctx->pc = 0x2528A0u;
label_2528a0:
    // 0x2528a0: 0x0  nop
    ctx->pc = 0x2528a0u;
    // NOP
label_2528a4:
    // 0x2528a4: 0x0  nop
    ctx->pc = 0x2528a4u;
    // NOP
label_2528a8:
    // 0x2528a8: 0x0  nop
    ctx->pc = 0x2528a8u;
    // NOP
label_2528ac:
    // 0x2528ac: 0x0  nop
    ctx->pc = 0x2528acu;
    // NOP
label_2528b0:
    // 0x2528b0: 0x0  nop
    ctx->pc = 0x2528b0u;
    // NOP
label_2528b4:
    // 0x2528b4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_2528b8:
    if (ctx->pc == 0x2528B8u) {
        ctx->pc = 0x2528BCu;
        goto label_2528bc;
    }
    ctx->pc = 0x2528B4u;
    {
        const bool branch_taken_0x2528b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2528b4) {
            ctx->pc = 0x2528A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2528a0;
        }
    }
    ctx->pc = 0x2528BCu;
label_2528bc:
    // 0x2528bc: 0x0  nop
    ctx->pc = 0x2528bcu;
    // NOP
label_2528c0:
    // 0x2528c0: 0xc093f3a  jal         func_24FCE8
label_2528c4:
    if (ctx->pc == 0x2528C4u) {
        ctx->pc = 0x2528C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528C0u;
        // 0x2528c4: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528C8u;
        goto label_2528c8;
    }
    ctx->pc = 0x2528C0u;
    SET_GPR_U32(ctx, 31, 0x2528C8u);
    ctx->pc = 0x2528C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528C0u;
    // 0x2528c4: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2528C0u, 0x2528C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528C8u;
label_2528c8:
    // 0x2528c8: 0x5a200012  blezl       $s1, . + 4 + (0x12 << 2)
label_2528cc:
    if (ctx->pc == 0x2528CCu) {
        ctx->pc = 0x2528CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528C8u;
        // 0x2528cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528D0u;
        goto label_2528d0;
    }
    ctx->pc = 0x2528C8u;
    {
        const bool branch_taken_0x2528c8 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x2528c8) {
            ctx->pc = 0x2528CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2528C8u;
            // 0x2528cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252914u;
            goto label_252914;
        }
    }
    ctx->pc = 0x2528D0u;
label_2528d0:
    // 0x2528d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2528d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2528d4:
    // 0x2528d4: 0x0  nop
    ctx->pc = 0x2528d4u;
    // NOP
label_2528d8:
    // 0x2528d8: 0x24b00010  addiu       $s0, $a1, 0x10
    ctx->pc = 0x2528d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2528dc:
    // 0x2528dc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2528dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2528e0:
    // 0x2528e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2528e4:
    if (ctx->pc == 0x2528E4u) {
        ctx->pc = 0x2528E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528E0u;
        // 0x2528e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528E8u;
        goto label_2528e8;
    }
    ctx->pc = 0x2528E0u;
    {
        const bool branch_taken_0x2528e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2528e0) {
            ctx->pc = 0x2528E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2528E0u;
            // 0x2528e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2528E8u;
label_2528e8:
    // 0x2528e8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2528e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2528ec:
    // 0x2528ec: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x2528ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_2528f0:
    // 0x2528f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2528f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2528f4:
    // 0x2528f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2528f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2528f8:
    // 0x2528f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2528f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2528fc:
    // 0x2528fc: 0x40f809  jalr        $v0
label_252900:
    if (ctx->pc == 0x252900u) {
        ctx->pc = 0x252900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528FCu;
        // 0x252900: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252904u;
        goto label_252904;
    }
    ctx->pc = 0x2528FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x252904u);
        ctx->pc = 0x252900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528FCu;
        // 0x252900: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2528FCu, 0x252904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252904u;
label_252904:
    // 0x252904: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x252904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_252908:
    // 0x252908: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_25290c:
    if (ctx->pc == 0x25290Cu) {
        ctx->pc = 0x25290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252908u;
        // 0x25290c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252910u;
        goto label_252910;
    }
    ctx->pc = 0x252908u;
    {
        const bool branch_taken_0x252908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252908u;
        // 0x25290c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252908) {
            ctx->pc = 0x2528D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2528d8;
        }
    }
    ctx->pc = 0x252910u;
label_252910:
    // 0x252910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252914:
    // 0x252914: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x252914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_252918:
    // 0x252918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25291c:
    // 0x25291c: 0x8093f40  j           func_24FD00
label_252920:
    if (ctx->pc == 0x252920u) {
        ctx->pc = 0x252920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25291Cu;
        // 0x252920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252924u;
        goto label_fallthrough_0x25291c;
    }
    ctx->pc = 0x25291Cu;
    ctx->pc = 0x252920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25291Cu;
    // 0x252920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
label_fallthrough_0x25291c:
    ctx->pc = 0x252924u;
}
