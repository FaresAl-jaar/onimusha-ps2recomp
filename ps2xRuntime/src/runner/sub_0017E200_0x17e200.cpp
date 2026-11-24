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

// Function: sub_0017E200
// Address: 0x17e200 - 0x17e298
void sub_0017E200_0x17e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E200_0x17e200");
#endif

    switch (ctx->pc) {
        case 0x17e28cu: goto label_17e28c;
        default: break;
    }

    ctx->pc = 0x17e200u;

    // 0x17e200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e204: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17e204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e20c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e210: 0x90880020  lbu         $t0, 0x20($a0)
    ctx->pc = 0x17e210u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x17e214: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17e214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e218: 0x84850010  lh          $a1, 0x10($a0)
    ctx->pc = 0x17e218u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17e21c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x17e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x17e220: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x17e220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x17e224: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x17e224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x17e228: 0x84840012  lh          $a0, 0x12($a0)
    ctx->pc = 0x17e228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x17e22c: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x17e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x17e230: 0xc54821  addu        $t1, $a2, $a1
    ctx->pc = 0x17e230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17e234: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x17e234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x17e238: 0x90480021  lbu         $t0, 0x21($v0)
    ctx->pc = 0x17e238u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x17e23c: 0x9125000b  lbu         $a1, 0xB($t1)
    ctx->pc = 0x17e23cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 11)));
    // 0x17e240: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x17e240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e244: 0x95240008  lhu         $a0, 0x8($t1)
    ctx->pc = 0x17e244u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x17e248: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x17e248u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x17e24c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x17e24cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x17e250: 0xa33004  sllv        $a2, $v1, $a1
    ctx->pc = 0x17e250u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x17e254: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x17e254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x17e258: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x17e258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17e25c: 0x94a50008  lhu         $a1, 0x8($a1)
    ctx->pc = 0x17e25cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17e260: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E260u;
    {
        const bool branch_taken_0x17e260 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x17E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E260u;
        // 0x17e264: 0x61983  sra         $v1, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e260) {
            ctx->pc = 0x17E270u;
            goto label_17e270;
        }
    }
    ctx->pc = 0x17E268u;
    // 0x17e268: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x17e268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x17e26c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x17e26cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_17e270:
    // 0x17e270: 0x9127000a  lbu         $a3, 0xA($t1)
    ctx->pc = 0x17e270u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x17e274: 0x84480008  lh          $t0, 0x8($v0)
    ctx->pc = 0x17e274u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e278: 0x844a000c  lh          $t2, 0xC($v0)
    ctx->pc = 0x17e278u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17e27c: 0x844b000e  lh          $t3, 0xE($v0)
    ctx->pc = 0x17e27cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x17e280: 0x8449000a  lh          $t1, 0xA($v0)
    ctx->pc = 0x17e280u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x17e284: 0xc05f8c8  jal         func_17E320
    ctx->pc = 0x17E284u;
    SET_GPR_U32(ctx, 31, 0x17E28Cu);
    ctx->pc = 0x17E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E284u;
    // 0x17e288: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E320u, 0x17E284u, 0x17E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E28Cu;
label_17e28c:
    // 0x17e28c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e290: 0x3e00008  jr          $ra
    ctx->pc = 0x17E290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E290u;
        // 0x17e294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E298u;
}
