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

// Function: sub_00200190
// Address: 0x200190 - 0x20024c
void sub_00200190_0x200190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200190_0x200190");
#endif

    switch (ctx->pc) {
        case 0x200190u: goto label_200190;
        case 0x200194u: goto label_200194;
        case 0x200198u: goto label_200198;
        case 0x20019cu: goto label_20019c;
        case 0x2001a0u: goto label_2001a0;
        case 0x2001a4u: goto label_2001a4;
        case 0x2001a8u: goto label_2001a8;
        case 0x2001acu: goto label_2001ac;
        case 0x2001b0u: goto label_2001b0;
        case 0x2001b4u: goto label_2001b4;
        case 0x2001b8u: goto label_2001b8;
        case 0x2001bcu: goto label_2001bc;
        case 0x2001c0u: goto label_2001c0;
        case 0x2001c4u: goto label_2001c4;
        case 0x2001c8u: goto label_2001c8;
        case 0x2001ccu: goto label_2001cc;
        case 0x2001d0u: goto label_2001d0;
        case 0x2001d4u: goto label_2001d4;
        case 0x2001d8u: goto label_2001d8;
        case 0x2001dcu: goto label_2001dc;
        case 0x2001e0u: goto label_2001e0;
        case 0x2001e4u: goto label_2001e4;
        case 0x2001e8u: goto label_2001e8;
        case 0x2001ecu: goto label_2001ec;
        case 0x2001f0u: goto label_2001f0;
        case 0x2001f4u: goto label_2001f4;
        case 0x2001f8u: goto label_2001f8;
        case 0x2001fcu: goto label_2001fc;
        case 0x200200u: goto label_200200;
        case 0x200204u: goto label_200204;
        case 0x200208u: goto label_200208;
        case 0x20020cu: goto label_20020c;
        case 0x200210u: goto label_200210;
        case 0x200214u: goto label_200214;
        case 0x200218u: goto label_200218;
        case 0x20021cu: goto label_20021c;
        case 0x200220u: goto label_200220;
        case 0x200224u: goto label_200224;
        case 0x200228u: goto label_200228;
        case 0x20022cu: goto label_20022c;
        case 0x200230u: goto label_200230;
        case 0x200234u: goto label_200234;
        case 0x200238u: goto label_200238;
        case 0x20023cu: goto label_20023c;
        case 0x200240u: goto label_200240;
        case 0x200244u: goto label_200244;
        case 0x200248u: goto label_200248;
        default: break;
    }

    ctx->pc = 0x200190u;

label_200190:
    // 0x200190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_200194:
    // 0x200194: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x200194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_200198:
    // 0x200198: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x200198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_20019c:
    // 0x20019c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20019cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2001a0:
    // 0x2001a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2001a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2001a4:
    // 0x2001a4: 0x2491038c  addiu       $s1, $a0, 0x38C
    ctx->pc = 0x2001a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 908));
label_2001a8:
    // 0x2001a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2001a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2001ac:
    // 0x2001ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2001acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2001b0:
    // 0x2001b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2001b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2001b4:
    // 0x2001b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2001b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2001b8:
    // 0x2001b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2001b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2001bc:
    // 0x2001bc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2001bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2001c0:
    // 0x2001c0: 0x40f809  jalr        $v0
label_2001c4:
    if (ctx->pc == 0x2001C4u) {
        ctx->pc = 0x2001C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001C0u;
        // 0x2001c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2001C8u;
        goto label_2001c8;
    }
    ctx->pc = 0x2001C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2001C8u);
        ctx->pc = 0x2001C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001C0u;
        // 0x2001c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2001C0u, 0x2001C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2001C8u;
label_2001c8:
    // 0x2001c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2001c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2001cc:
    // 0x2001cc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x2001ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_2001d0:
    // 0x2001d0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2001d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2001d4:
    // 0x2001d4: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x2001d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2001d8:
    // 0x2001d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2001d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2001dc:
    // 0x2001dc: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x2001dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2001e0:
    // 0x2001e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2001e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2001e4:
    // 0x2001e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2001e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2001e8:
    // 0x2001e8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2001e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2001ec:
    // 0x2001ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2001ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2001f0:
    // 0x2001f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2001f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2001f4:
    // 0x2001f4: 0xc094854  jal         func_252150
label_2001f8:
    if (ctx->pc == 0x2001F8u) {
        ctx->pc = 0x2001F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001F4u;
        // 0x2001f8: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2001FCu;
        goto label_2001fc;
    }
    ctx->pc = 0x2001F4u;
    SET_GPR_U32(ctx, 31, 0x2001FCu);
    ctx->pc = 0x2001F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001F4u;
    // 0x2001f8: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x2001F4u, 0x2001FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001FCu;
label_2001fc:
    // 0x2001fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2001fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200200:
    // 0x200200: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x200200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200204:
    // 0x200204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200208:
    // 0x200208: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20020c:
    // 0x20020c: 0x40f809  jalr        $v0
label_200210:
    if (ctx->pc == 0x200210u) {
        ctx->pc = 0x200210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20020Cu;
        // 0x200210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200214u;
        goto label_200214;
    }
    ctx->pc = 0x20020Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200214u);
        ctx->pc = 0x200210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20020Cu;
        // 0x200210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20020Cu, 0x200214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200214u;
label_200214:
    // 0x200214: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x200214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200218:
    // 0x200218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20021c:
    // 0x20021c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20021cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200220:
    // 0x200220: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x200220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_200224:
    // 0x200224: 0x40f809  jalr        $v0
label_200228:
    if (ctx->pc == 0x200228u) {
        ctx->pc = 0x200228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200224u;
        // 0x200228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20022Cu;
        goto label_20022c;
    }
    ctx->pc = 0x200224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20022Cu);
        ctx->pc = 0x200228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200224u;
        // 0x200228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200224u, 0x20022Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20022Cu;
label_20022c:
    // 0x20022c: 0xc0801b4  jal         func_2006D0
label_200230:
    if (ctx->pc == 0x200230u) {
        ctx->pc = 0x200230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20022Cu;
        // 0x200230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200234u;
        goto label_200234;
    }
    ctx->pc = 0x20022Cu;
    SET_GPR_U32(ctx, 31, 0x200234u);
    ctx->pc = 0x200230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20022Cu;
    // 0x200230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2006D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006D0u, 0x20022Cu, 0x200234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200234u;
label_200234:
    // 0x200234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200238:
    // 0x200238: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x200238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20023c:
    // 0x20023c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20023cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_200240:
    // 0x200240: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_200244:
    // 0x200244: 0x3e00008  jr          $ra
label_200248:
    if (ctx->pc == 0x200248u) {
        ctx->pc = 0x200248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200244u;
        // 0x200248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20024Cu;
        goto label_fallthrough_0x200244;
    }
    ctx->pc = 0x200244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200244u;
        // 0x200248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200244:
    ctx->pc = 0x20024Cu;
}
