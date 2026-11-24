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

// Function: sub_00179260
// Address: 0x179260 - 0x179448
void sub_00179260_0x179260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179260_0x179260");
#endif

    switch (ctx->pc) {
        case 0x1792a8u: goto label_1792a8;
        case 0x1792d8u: goto label_1792d8;
        case 0x17930cu: goto label_17930c;
        case 0x17933cu: goto label_17933c;
        case 0x179370u: goto label_179370;
        case 0x1793a0u: goto label_1793a0;
        case 0x1793d4u: goto label_1793d4;
        case 0x179404u: goto label_179404;
        case 0x179434u: goto label_179434;
        default: break;
    }

    ctx->pc = 0x179260u;

    // 0x179260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17926c: 0x8c90215c  lw          $s0, 0x215C($a0)
    ctx->pc = 0x17926cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8540)));
    // 0x179270: 0x12000071  beqz        $s0, . + 4 + (0x71 << 2)
    ctx->pc = 0x179270u;
    {
        const bool branch_taken_0x179270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x179274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179270u;
        // 0x179274: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179270) {
            ctx->pc = 0x179438u;
            goto label_179438;
        }
    }
    ctx->pc = 0x179278u;
    // 0x179278: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x179278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x17927c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17927cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x179280: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x179280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x179284: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x179284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x179288: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x179288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x17928c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x17928cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x179290: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x179290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x179294: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x179294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x179298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17929c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x17929cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1792a0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1792A0u;
    SET_GPR_U32(ctx, 31, 0x1792A8u);
    ctx->pc = 0x1792A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1792A0u;
    // 0x1792a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1792A0u, 0x1792A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1792A8u;
label_1792a8:
    // 0x1792a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1792a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1792ac: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x1792acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x1792b0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1792b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1792b4: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x1792b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x1792b8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1792b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1792bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1792bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1792c0: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x1792c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1792c4: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1792c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1792c8: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x1792c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x1792cc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1792ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1792d0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1792D0u;
    SET_GPR_U32(ctx, 31, 0x1792D8u);
    ctx->pc = 0x1792D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1792D0u;
    // 0x1792d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1792D0u, 0x1792D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1792D8u;
label_1792d8:
    // 0x1792d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1792d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1792dc: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x1792dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x1792e0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1792e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1792e4: 0x3442004e  ori         $v0, $v0, 0x4E
    ctx->pc = 0x1792e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)78);
    // 0x1792e8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1792e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1792ec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1792ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1792f0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1792f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1792f4: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1792f8: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1792f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1792fc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1792fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x179300: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x179300u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x179304: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x179304u;
    SET_GPR_U32(ctx, 31, 0x17930Cu);
    ctx->pc = 0x179308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179304u;
    // 0x179308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x179304u, 0x17930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17930Cu;
label_17930c:
    // 0x17930c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17930cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x179310: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x179310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x179314: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x179314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x179318: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x179318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17931c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x17931cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x179320: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x179320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x179324: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x179324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179328: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x179328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x17932c: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x17932cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x179330: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x179330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x179334: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x179334u;
    SET_GPR_U32(ctx, 31, 0x17933Cu);
    ctx->pc = 0x179338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179334u;
    // 0x179338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x179334u, 0x17933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17933Cu;
label_17933c:
    // 0x17933c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17933cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x179340: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x179340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x179344: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x179344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x179348: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x179348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x17934c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x17934cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x179350: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x179350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x179354: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x179354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x179358: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x179358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x17935c: 0x3442020b  ori         $v0, $v0, 0x20B
    ctx->pc = 0x17935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)523);
    // 0x179360: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x179360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x179364: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x179364u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x179368: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x179368u;
    SET_GPR_U32(ctx, 31, 0x179370u);
    ctx->pc = 0x17936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179368u;
    // 0x17936c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x179368u, 0x179370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179370u;
label_179370:
    // 0x179370: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x179370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x179374: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x179374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x179378: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x179378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x17937c: 0x34420015  ori         $v0, $v0, 0x15
    ctx->pc = 0x17937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x179380: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x179380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x179384: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x179384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x179388: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x179388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x17938c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x17938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x179390: 0xfe020058  sd          $v0, 0x58($s0)
    ctx->pc = 0x179390u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
    // 0x179394: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x179394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x179398: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x179398u;
    SET_GPR_U32(ctx, 31, 0x1793A0u);
    ctx->pc = 0x17939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179398u;
    // 0x17939c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x179398u, 0x1793A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793A0u;
label_1793a0:
    // 0x1793a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1793a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1793a4: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x1793a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x1793a8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1793a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1793ac: 0x3442004f  ori         $v0, $v0, 0x4F
    ctx->pc = 0x1793acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)79);
    // 0x1793b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1793b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1793b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1793b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1793b8: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1793b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1793bc: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1793bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1793c0: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1793c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1793c4: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x1793c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1793c8: 0xfe020068  sd          $v0, 0x68($s0)
    ctx->pc = 0x1793c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
    // 0x1793cc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1793CCu;
    SET_GPR_U32(ctx, 31, 0x1793D4u);
    ctx->pc = 0x1793D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793CCu;
    // 0x1793d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1793CCu, 0x1793D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793D4u;
label_1793d4:
    // 0x1793d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1793d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1793d8: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x1793d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x1793dc: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1793dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1793e0: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1793e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1793e4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1793e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1793e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1793e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1793ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1793ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1793f0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1793f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1793f4: 0xfe020078  sd          $v0, 0x78($s0)
    ctx->pc = 0x1793f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
    // 0x1793f8: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x1793f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1793fc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1793FCu;
    SET_GPR_U32(ctx, 31, 0x179404u);
    ctx->pc = 0x179400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793FCu;
    // 0x179400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1793FCu, 0x179404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179404u;
label_179404:
    // 0x179404: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x179404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x179408: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x179408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x17940c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x17940cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x179410: 0x3442001a  ori         $v0, $v0, 0x1A
    ctx->pc = 0x179410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
    // 0x179414: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x179414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x179418: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x179418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x17941c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179420: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x179420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x179424: 0xfe020088  sd          $v0, 0x88($s0)
    ctx->pc = 0x179424u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 2));
    // 0x179428: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x179428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x17942c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x17942Cu;
    SET_GPR_U32(ctx, 31, 0x179434u);
    ctx->pc = 0x179430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17942Cu;
    // 0x179430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x17942Cu, 0x179434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179434u;
label_179434:
    // 0x179434: 0x0  nop
    ctx->pc = 0x179434u;
    // NOP
label_179438:
    // 0x179438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17943c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17943cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179440: 0x3e00008  jr          $ra
    ctx->pc = 0x179440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179440u;
        // 0x179444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179448u;
}
