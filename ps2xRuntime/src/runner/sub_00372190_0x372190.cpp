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

// Function: sub_00372190
// Address: 0x372190 - 0x37227c
void sub_00372190_0x372190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372190_0x372190");
#endif

    switch (ctx->pc) {
        case 0x3721b8u: goto label_3721b8;
        case 0x37226cu: goto label_37226c;
        default: break;
    }

    ctx->pc = 0x372190u;

    // 0x372190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372194: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37219c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3721a0: 0x9024fc8f  lbu         $a0, -0x371($at)
    ctx->pc = 0x3721a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x3721a4: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3721A4u;
    {
        const bool branch_taken_0x3721a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3721A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721A4u;
        // 0x3721a8: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721a4) {
            ctx->pc = 0x372270u;
            goto label_372270;
        }
    }
    ctx->pc = 0x3721ACu;
    // 0x3721ac: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x3721acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3721b0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3721B0u;
    SET_GPR_U32(ctx, 31, 0x3721B8u);
    ctx->pc = 0x3721B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3721B0u;
    // 0x3721b4: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3721B0u, 0x3721B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3721B8u;
label_3721b8:
    // 0x3721b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3721b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721bc: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3721BCu;
    {
        const bool branch_taken_0x3721bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3721C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721BCu;
        // 0x3721c0: 0x3c0c8000  lui         $t4, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721bc) {
            ctx->pc = 0x372270u;
            goto label_372270;
        }
    }
    ctx->pc = 0x3721C4u;
    // 0x3721c4: 0x3c027030  lui         $v0, 0x7030
    ctx->pc = 0x3721c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28720 << 16));
    // 0x3721c8: 0x3442004c  ori         $v0, $v0, 0x4C
    ctx->pc = 0x3721c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x3721cc: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x3721ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x3721d0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3721d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3721d4: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x3721d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x3721d8: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x3721d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3721dc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3721dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3721e0: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x3721e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3721e4: 0x340afff4  ori         $t2, $zero, 0xFFF4
    ctx->pc = 0x3721e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65524);
    // 0x3721e8: 0x3c028680  lui         $v0, 0x8680
    ctx->pc = 0x3721e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34432 << 16));
    // 0x3721ec: 0x34687000  ori         $t0, $v1, 0x7000
    ctx->pc = 0x3721ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x3721f0: 0x344b7000  ori         $t3, $v0, 0x7000
    ctx->pc = 0x3721f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3721f4: 0x34499000  ori         $t1, $v0, 0x9000
    ctx->pc = 0x3721f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3721f8: 0x34679000  ori         $a3, $v1, 0x9000
    ctx->pc = 0x3721f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x3721fc: 0x3c028900  lui         $v0, 0x8900
    ctx->pc = 0x3721fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35072 << 16));
    // 0x372200: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x372200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x372204: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x372204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x372208: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x372208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x37220c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x37220cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x372210: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x372210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x372214: 0xa0a0000f  sb          $zero, 0xF($a1)
    ctx->pc = 0x372214u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x372218: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x372218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x37221c: 0xacab0010  sw          $t3, 0x10($a1)
    ctx->pc = 0x37221cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 11));
    // 0x372220: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x372220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372224: 0xacaa0014  sw          $t2, 0x14($a1)
    ctx->pc = 0x372224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 10));
    // 0x372228: 0xaca90020  sw          $t1, 0x20($a1)
    ctx->pc = 0x372228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 9));
    // 0x37222c: 0xacaa0024  sw          $t2, 0x24($a1)
    ctx->pc = 0x37222cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 10));
    // 0x372230: 0xaca80030  sw          $t0, 0x30($a1)
    ctx->pc = 0x372230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 8));
    // 0x372234: 0xacaa0034  sw          $t2, 0x34($a1)
    ctx->pc = 0x372234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 10));
    // 0x372238: 0xaca70040  sw          $a3, 0x40($a1)
    ctx->pc = 0x372238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 7));
    // 0x37223c: 0xacaa0044  sw          $t2, 0x44($a1)
    ctx->pc = 0x37223cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 10));
    // 0x372240: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x372240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
    // 0x372244: 0xacaa0054  sw          $t2, 0x54($a1)
    ctx->pc = 0x372244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 10));
    // 0x372248: 0xaca20060  sw          $v0, 0x60($a1)
    ctx->pc = 0x372248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 2));
    // 0x37224c: 0xacaa0064  sw          $t2, 0x64($a1)
    ctx->pc = 0x37224cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 10));
    // 0x372250: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x372250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x372254: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x372254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x372258: 0xacac0038  sw          $t4, 0x38($a1)
    ctx->pc = 0x372258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 12));
    // 0x37225c: 0xacac0048  sw          $t4, 0x48($a1)
    ctx->pc = 0x37225cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 12));
    // 0x372260: 0xacac0058  sw          $t4, 0x58($a1)
    ctx->pc = 0x372260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 12));
    // 0x372264: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x372264u;
    SET_GPR_U32(ctx, 31, 0x37226Cu);
    ctx->pc = 0x372268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372264u;
    // 0x372268: 0xacac0068  sw          $t4, 0x68($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x372264u, 0x37226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37226Cu;
label_37226c:
    // 0x37226c: 0x0  nop
    ctx->pc = 0x37226cu;
    // NOP
label_372270:
    // 0x372270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372274: 0x3e00008  jr          $ra
    ctx->pc = 0x372274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372274u;
        // 0x372278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37227Cu;
}
