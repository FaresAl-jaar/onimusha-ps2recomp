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

// Function: sub_001FF1C0
// Address: 0x1ff1c0 - 0x1ff264
void sub_001FF1C0_0x1ff1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF1C0_0x1ff1c0");
#endif

    switch (ctx->pc) {
        case 0x1ff1f4u: goto label_1ff1f4;
        case 0x1ff21cu: goto label_1ff21c;
        case 0x1ff230u: goto label_1ff230;
        default: break;
    }

    ctx->pc = 0x1ff1c0u;

    // 0x1ff1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff1c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff1c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ff1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff1d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff1d8: 0x8e23035c  lw          $v1, 0x35C($s1)
    ctx->pc = 0x1ff1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
    // 0x1ff1dc: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FF1DCu;
    {
        const bool branch_taken_0x1ff1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1DCu;
        // 0x1ff1e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1dc) {
            ctx->pc = 0x1FF250u;
            goto label_1ff250;
        }
    }
    ctx->pc = 0x1FF1E4u;
    // 0x1ff1e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ff1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff1e8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ff1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ff1ec: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1FF1ECu;
    SET_GPR_U32(ctx, 31, 0x1FF1F4u);
    ctx->pc = 0x1FF1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF1ECu;
    // 0x1ff1f0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1FF1ECu, 0x1FF1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF1F4u;
label_1ff1f4:
    // 0x1ff1f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff1f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1f8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF1F8u;
    {
        const bool branch_taken_0x1ff1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1F8u;
        // 0x1ff1fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1f8) {
            ctx->pc = 0x1FF24Cu;
            goto label_1ff24c;
        }
    }
    ctx->pc = 0x1FF200u;
    // 0x1ff200: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ff200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff204: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff208: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ff208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff20c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1ff20cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ff210: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ff210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff214: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1FF214u;
    SET_GPR_U32(ctx, 31, 0x1FF21Cu);
    ctx->pc = 0x1FF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF214u;
    // 0x1ff218: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1FF214u, 0x1FF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF21Cu;
label_1ff21c:
    // 0x1ff21c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff21cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff220: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF220u;
    {
        const bool branch_taken_0x1ff220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff220) {
            ctx->pc = 0x1FF224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF220u;
            // 0x1ff224: 0x8e22035c  lw          $v0, 0x35C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF250u;
            goto label_1ff250;
        }
    }
    ctx->pc = 0x1FF228u;
    // 0x1ff228: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x1FF228u;
    SET_GPR_U32(ctx, 31, 0x1FF230u);
    ctx->pc = 0x1FF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF228u;
    // 0x1ff22c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x1FF228u, 0x1FF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF230u;
label_1ff230:
    // 0x1ff230: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff234: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1ff234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ff238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF238u;
    {
        const bool branch_taken_0x1ff238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF238u;
        // 0x1ff23c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff238) {
            ctx->pc = 0x1FF248u;
            goto label_1ff248;
        }
    }
    ctx->pc = 0x1FF240u;
    // 0x1ff240: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF240u;
    {
        const bool branch_taken_0x1ff240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF240u;
        // 0x1ff244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff240) {
            ctx->pc = 0x1FF24Cu;
            goto label_1ff24c;
        }
    }
    ctx->pc = 0x1FF248u;
label_1ff248:
    // 0x1ff248: 0xae22035c  sw          $v0, 0x35C($s1)
    ctx->pc = 0x1ff248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 2));
label_1ff24c:
    // 0x1ff24c: 0x8e22035c  lw          $v0, 0x35C($s1)
    ctx->pc = 0x1ff24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
label_1ff250:
    // 0x1ff250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff25c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF25Cu;
        // 0x1ff260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF264u;
}
