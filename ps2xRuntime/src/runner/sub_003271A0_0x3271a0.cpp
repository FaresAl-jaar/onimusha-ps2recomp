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

// Function: sub_003271A0
// Address: 0x3271a0 - 0x327484
void sub_003271A0_0x3271a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003271A0_0x3271a0");
#endif

    switch (ctx->pc) {
        case 0x32720cu: goto label_32720c;
        case 0x327234u: goto label_327234;
        case 0x327278u: goto label_327278;
        case 0x327360u: goto label_327360;
        case 0x3273a8u: goto label_3273a8;
        case 0x3273b8u: goto label_3273b8;
        case 0x3273d4u: goto label_3273d4;
        case 0x327410u: goto label_327410;
        case 0x32742cu: goto label_32742c;
        case 0x32743cu: goto label_32743c;
        default: break;
    }

    ctx->pc = 0x3271a0u;

    // 0x3271a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3271a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3271a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3271a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3271a8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3271a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3271ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3271acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3271b0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3271b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271b4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3271b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3271b8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3271b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3271bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3271c0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3271c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3271c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3271c8: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x3271c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3271ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3271d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3271d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3271d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3271d8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3271d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3271dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3271e0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3271e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3271e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3271e8: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x3271e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x3271ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3271ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3271f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3271f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3271f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271fc: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x3271fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x327200: 0x25087130  addiu       $t0, $t0, 0x7130
    ctx->pc = 0x327200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28976));
    // 0x327204: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x327204u;
    SET_GPR_U32(ctx, 31, 0x32720Cu);
    ctx->pc = 0x327208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327204u;
    // 0x327208: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x327204u, 0x32720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32720Cu;
label_32720c:
    // 0x32720c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32720cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327210: 0x1220008d  beqz        $s1, . + 4 + (0x8D << 2)
    ctx->pc = 0x327210u;
    {
        const bool branch_taken_0x327210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x327214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327210u;
        // 0x327214: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327210) {
            ctx->pc = 0x327448u;
            goto label_327448;
        }
    }
    ctx->pc = 0x327218u;
    // 0x327218: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x327218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32721c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327220: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x327220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x327224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x327224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327228: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x327228u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32722c: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x32722Cu;
    SET_GPR_U32(ctx, 31, 0x327234u);
    ctx->pc = 0x327230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32722Cu;
    // 0x327230: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x32722Cu, 0x327234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327234u;
label_327234:
    // 0x327234: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x327234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x327238: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x327238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x32723c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32723cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327240: 0x24a5cc50  addiu       $a1, $a1, -0x33B0
    ctx->pc = 0x327240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954064));
    // 0x327244: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x327244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327248: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x327248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x32724c: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x32724cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327254: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x327254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x327258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32725c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x32725cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x327260: 0xa6250526  sh          $a1, 0x526($s1)
    ctx->pc = 0x327260u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x327264: 0xa6230528  sh          $v1, 0x528($s1)
    ctx->pc = 0x327264u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x327268: 0xa623052a  sh          $v1, 0x52A($s1)
    ctx->pc = 0x327268u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x32726c: 0xa2200521  sb          $zero, 0x521($s1)
    ctx->pc = 0x32726cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x327270: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x327270u;
    SET_GPR_U32(ctx, 31, 0x327278u);
    ctx->pc = 0x327274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327270u;
    // 0x327274: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x327270u, 0x327278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327278u;
label_327278:
    // 0x327278: 0xae200560  sw          $zero, 0x560($s1)
    ctx->pc = 0x327278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
    // 0x32727c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32727cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x327280: 0xae22056c  sw          $v0, 0x56C($s1)
    ctx->pc = 0x327280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1388), GPR_U32(ctx, 2));
    // 0x327284: 0xa23e0573  sb          $fp, 0x573($s1)
    ctx->pc = 0x327284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1395), (uint8_t)GPR_U32(ctx, 30));
    // 0x327288: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x327288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32728c: 0xa2350574  sb          $s5, 0x574($s1)
    ctx->pc = 0x32728cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1396), (uint8_t)GPR_U32(ctx, 21));
    // 0x327290: 0x2442cc54  addiu       $v0, $v0, -0x33AC
    ctx->pc = 0x327290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954068));
    // 0x327294: 0xae200518  sw          $zero, 0x518($s1)
    ctx->pc = 0x327294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
    // 0x327298: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x327298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32729c: 0x9284000a  lbu         $a0, 0xA($s4)
    ctx->pc = 0x32729cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x3272a0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3272a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3272a4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3272a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3272a8: 0xa2240570  sb          $a0, 0x570($s1)
    ctx->pc = 0x3272a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1392), (uint8_t)GPR_U32(ctx, 4));
    // 0x3272ac: 0xa2200571  sb          $zero, 0x571($s1)
    ctx->pc = 0x3272acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1393), (uint8_t)GPR_U32(ctx, 0));
    // 0x3272b0: 0xa2200572  sb          $zero, 0x572($s1)
    ctx->pc = 0x3272b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1394), (uint8_t)GPR_U32(ctx, 0));
    // 0x3272b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3272b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3272b8: 0xe6200564  swc1        $f0, 0x564($s1)
    ctx->pc = 0x3272b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1380), bits); }
    // 0x3272bc: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3272bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3272c0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3272c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3272c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3272c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3272c8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3272c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3272cc: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3272ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3272d0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3272d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3272d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3272D4u;
    {
        const bool branch_taken_0x3272d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3272D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272D4u;
        // 0x3272d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272d4) {
            ctx->pc = 0x3272E8u;
            goto label_3272e8;
        }
    }
    ctx->pc = 0x3272DCu;
    // 0x3272dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3272dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3272e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3272E0u;
    {
        const bool branch_taken_0x3272e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3272E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272E0u;
        // 0x3272e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272e0) {
            ctx->pc = 0x327300u;
            goto label_327300;
        }
    }
    ctx->pc = 0x3272E8u;
label_3272e8:
    // 0x3272e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3272e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3272ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3272ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3272f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3272f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3272f4: 0x0  nop
    ctx->pc = 0x3272f4u;
    // NOP
    // 0x3272f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3272f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3272fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3272fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_327300:
    // 0x327300: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x327300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x327304: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x327304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x327308: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x327308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x32730c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x32730cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x327310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327314: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x327314u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x327318: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x327318u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32731c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32731cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x327320: 0x2442cc5c  addiu       $v0, $v0, -0x33A4
    ctx->pc = 0x327320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954076));
    // 0x327324: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x327324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x327328: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x327328u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x32732c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32732cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327330: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x327330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327334: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x327334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x327338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32733c: 0xe6200568  swc1        $f0, 0x568($s1)
    ctx->pc = 0x32733cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1384), bits); }
    // 0x327340: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x327340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x327344: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x327344u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
    // 0x327348: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x327348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x32734c: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x32734Cu;
    {
        const bool branch_taken_0x32734c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x327350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32734Cu;
        // 0x327350: 0x7e220090  sq          $v0, 0x90($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32734c) {
            ctx->pc = 0x327368u;
            goto label_327368;
        }
    }
    ctx->pc = 0x327354u;
    // 0x327354: 0x92240570  lbu         $a0, 0x570($s1)
    ctx->pc = 0x327354u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x327358: 0xc0970c4  jal         func_25C310
    ctx->pc = 0x327358u;
    SET_GPR_U32(ctx, 31, 0x327360u);
    ctx->pc = 0x32735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327358u;
    // 0x32735c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C310u, 0x327358u, 0x327360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327360u;
label_327360:
    // 0x327360: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x327360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327364: 0x0  nop
    ctx->pc = 0x327364u;
    // NOP
label_327368:
    // 0x327368: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x327368u;
    {
        const bool branch_taken_0x327368 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x327368) {
            ctx->pc = 0x327390u;
            goto label_327390;
        }
    }
    ctx->pc = 0x327370u;
    // 0x327370: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x327370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x327374: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x327374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    // 0x327378: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x327378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x32737c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32737Cu;
    {
        const bool branch_taken_0x32737c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32737c) {
            ctx->pc = 0x327398u;
            goto label_327398;
        }
    }
    ctx->pc = 0x327384u;
    // 0x327384: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x327384u;
    {
        const bool branch_taken_0x327384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327384u;
        // 0x327388: 0xae200518  sw          $zero, 0x518($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327384) {
            ctx->pc = 0x327398u;
            goto label_327398;
        }
    }
    ctx->pc = 0x32738Cu;
    // 0x32738c: 0x0  nop
    ctx->pc = 0x32738cu;
    // NOP
label_327390:
    // 0x327390: 0xae200518  sw          $zero, 0x518($s1)
    ctx->pc = 0x327390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
    // 0x327394: 0x0  nop
    ctx->pc = 0x327394u;
    // NOP
label_327398:
    // 0x327398: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x327398u;
    {
        const bool branch_taken_0x327398 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x32739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327398u;
        // 0x32739c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327398) {
            ctx->pc = 0x3273B0u;
            goto label_3273b0;
        }
    }
    ctx->pc = 0x3273A0u;
    // 0x3273a0: 0xc0c9d34  jal         func_3274D0
    ctx->pc = 0x3273A0u;
    SET_GPR_U32(ctx, 31, 0x3273A8u);
    ctx->pc = 0x3274D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3274D0u, 0x3273A0u, 0x3273A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273A8u;
label_3273a8:
    // 0x3273a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3273A8u;
    {
        const bool branch_taken_0x3273a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3273a8) {
            ctx->pc = 0x327440u;
            goto label_327440;
        }
    }
    ctx->pc = 0x3273B0u;
label_3273b0:
    // 0x3273b0: 0xc0c9d24  jal         func_327490
    ctx->pc = 0x3273B0u;
    SET_GPR_U32(ctx, 31, 0x3273B8u);
    ctx->pc = 0x3273B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273B0u;
    // 0x3273b4: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327490u, 0x3273B0u, 0x3273B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273B8u;
label_3273b8:
    // 0x3273b8: 0x868300c2  lh          $v1, 0xC2($s4)
    ctx->pc = 0x3273b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x3273bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3273bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3273c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3273c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3273c4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3273c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3273c8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3273c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3273cc: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3273CCu;
    SET_GPR_U32(ctx, 31, 0x3273D4u);
    ctx->pc = 0x3273D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273CCu;
    // 0x3273d0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3273CCu, 0x3273D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273D4u;
label_3273d4:
    // 0x3273d4: 0x92250574  lbu         $a1, 0x574($s1)
    ctx->pc = 0x3273d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x3273d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3273d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3273dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3273dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3273e0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3273e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3273e4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3273e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3273e8: 0x2484cc54  addiu       $a0, $a0, -0x33AC
    ctx->pc = 0x3273e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954068));
    // 0x3273ec: 0x34638885  ori         $v1, $v1, 0x8885
    ctx->pc = 0x3273ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34949);
    // 0x3273f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3273f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3273f4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3273f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3273f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3273f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3273fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3273fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x327400: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x327400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x327404: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x327404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327408: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x327408u;
    SET_GPR_U32(ctx, 31, 0x327410u);
    ctx->pc = 0x32740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327408u;
    // 0x32740c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x327408u, 0x327410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327410u;
label_327410:
    // 0x327410: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x327410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x327414: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x327414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x327418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x327418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32741c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32741cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327420: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x327420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x327424: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x327424u;
    SET_GPR_U32(ctx, 31, 0x32742Cu);
    ctx->pc = 0x327428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327424u;
    // 0x327428: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x327424u, 0x32742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32742Cu;
label_32742c:
    // 0x32742c: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x32742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x327430: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x327430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x327434: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x327434u;
    SET_GPR_U32(ctx, 31, 0x32743Cu);
    ctx->pc = 0x327438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327434u;
    // 0x327438: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x327434u, 0x32743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32743Cu;
label_32743c:
    // 0x32743c: 0x0  nop
    ctx->pc = 0x32743cu;
    // NOP
label_327440:
    // 0x327440: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x327440u;
    {
        const bool branch_taken_0x327440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327440u;
        // 0x327444: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327440) {
            ctx->pc = 0x327450u;
            goto label_327450;
        }
    }
    ctx->pc = 0x327448u;
label_327448:
    // 0x327448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32744c: 0x0  nop
    ctx->pc = 0x32744cu;
    // NOP
label_327450:
    // 0x327450: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x327450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x327454: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x327454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x327458: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x327458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32745c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x32745cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x327460: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x327460u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x327464: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x327464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x327468: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x327468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32746c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32746cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327470: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x327470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x327474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x327478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32747c: 0x3e00008  jr          $ra
    ctx->pc = 0x32747Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32747Cu;
        // 0x327480: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32747Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327484u;
}
