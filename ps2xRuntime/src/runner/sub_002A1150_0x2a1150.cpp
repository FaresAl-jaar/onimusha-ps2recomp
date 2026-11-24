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

// Function: sub_002A1150
// Address: 0x2a1150 - 0x2a12c8
void sub_002A1150_0x2a1150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1150_0x2a1150");
#endif

    switch (ctx->pc) {
        case 0x2a11a0u: goto label_2a11a0;
        case 0x2a11c8u: goto label_2a11c8;
        case 0x2a11f4u: goto label_2a11f4;
        case 0x2a1208u: goto label_2a1208;
        case 0x2a1228u: goto label_2a1228;
        case 0x2a1274u: goto label_2a1274;
        default: break;
    }

    ctx->pc = 0x2a1150u;

    // 0x2a1150: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a1150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a1154: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a1154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a1158: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a1158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a115c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a1160: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a1160u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1164: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a1164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a1168: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a116c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1178: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x2a1178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x2a117c: 0x8c950080  lw          $s5, 0x80($a0)
    ctx->pc = 0x2a117cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a1180: 0x8c930074  lw          $s3, 0x74($a0)
    ctx->pc = 0x2a1180u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2a1184: 0x8c92006c  lw          $s2, 0x6C($a0)
    ctx->pc = 0x2a1184u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2a1188: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x2a1188u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2a118c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1190: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1194: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a1194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1198: 0x2a2a021  addu        $s4, $s5, $v0
    ctx->pc = 0x2a1198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2a119c: 0x0  nop
    ctx->pc = 0x2a119cu;
    // NOP
label_2a11a0:
    // 0x2a11a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a11a4: 0xa2a200c4  sb          $v0, 0xC4($s5)
    ctx->pc = 0x2a11a4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 196), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a11a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a11a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11ac: 0xa6a000c6  sh          $zero, 0xC6($s5)
    ctx->pc = 0x2a11acu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 198), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a11b0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2a11b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a11b4: 0xa2a200c5  sb          $v0, 0xC5($s5)
    ctx->pc = 0x2a11b4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 197), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a11b8: 0xaea000d0  sw          $zero, 0xD0($s5)
    ctx->pc = 0x2a11b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 208), GPR_U32(ctx, 0));
    // 0x2a11bc: 0xaea000cc  sw          $zero, 0xCC($s5)
    ctx->pc = 0x2a11bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 0));
    // 0x2a11c0: 0xc04150c  jal         func_105430
    ctx->pc = 0x2A11C0u;
    SET_GPR_U32(ctx, 31, 0x2A11C8u);
    ctx->pc = 0x2A11C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11C0u;
    // 0x2a11c4: 0xaea000c8  sw          $zero, 0xC8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x2A11C0u, 0x2A11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11C8u;
label_2a11c8:
    // 0x2a11c8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2a11c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a11cc: 0x26b00040  addiu       $s0, $s5, 0x40
    ctx->pc = 0x2a11ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2a11d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a11d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a11d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11d8: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x2a11d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x2a11dc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2a11dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a11e0: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x2a11e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x2a11e4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2a11e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a11e8: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x2a11e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x2a11ec: 0xc04150c  jal         func_105430
    ctx->pc = 0x2A11ECu;
    SET_GPR_U32(ctx, 31, 0x2A11F4u);
    ctx->pc = 0x2A11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11ECu;
    // 0x2a11f0: 0xaea2003c  sw          $v0, 0x3C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x2A11ECu, 0x2A11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11F4u;
label_2a11f4:
    // 0x2a11f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a11f8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2a11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a11fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a11fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1200: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2A1200u;
    SET_GPR_U32(ctx, 31, 0x2A1208u);
    ctx->pc = 0x2A1204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1200u;
    // 0x2a1204: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2A1200u, 0x2A1208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1208u;
label_2a1208:
    // 0x2a1208: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a1208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a120c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2a120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a1210: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x2a1210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x2a1214: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2a1214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a1218: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1218u;
    {
        const bool branch_taken_0x2a1218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1218u;
        // 0x2a121c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1218) {
            ctx->pc = 0x2A1238u;
            goto label_2a1238;
        }
    }
    ctx->pc = 0x2A1220u;
    // 0x2a1220: 0xc04150c  jal         func_105430
    ctx->pc = 0x2A1220u;
    SET_GPR_U32(ctx, 31, 0x2A1228u);
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x2A1220u, 0x2A1228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1228u;
label_2a1228:
    // 0x2a1228: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2a1228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2a122c: 0x24636be0  addiu       $v1, $v1, 0x6BE0
    ctx->pc = 0x2a122cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27616));
    // 0x2a1230: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A1230u;
    {
        const bool branch_taken_0x2a1230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1230u;
        // 0x2a1234: 0xaea300c0  sw          $v1, 0xC0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1230) {
            ctx->pc = 0x2A1288u;
            goto label_2a1288;
        }
    }
    ctx->pc = 0x2A1238u;
label_2a1238:
    // 0x2a1238: 0x92a400c5  lbu         $a0, 0xC5($s5)
    ctx->pc = 0x2a1238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 197)));
    // 0x2a123c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2a123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a1240: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1240u;
    {
        const bool branch_taken_0x2a1240 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1240u;
        // 0x2a1244: 0x26c30010  addiu       $v1, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1240) {
            ctx->pc = 0x2A1250u;
            goto label_2a1250;
        }
    }
    ctx->pc = 0x2A1248u;
    // 0x2a1248: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A1248u;
    {
        const bool branch_taken_0x2a1248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1248u;
        // 0x2a124c: 0xaea300c0  sw          $v1, 0xC0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1248) {
            ctx->pc = 0x2A1288u;
            goto label_2a1288;
        }
    }
    ctx->pc = 0x2A1250u;
label_2a1250:
    // 0x2a1250: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2a1250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a1254: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x2a1254u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a1258: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a1258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a125c: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x2a125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x2a1260: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2a1260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a1264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a126c: 0xc04144e  jal         func_105138
    ctx->pc = 0x2A126Cu;
    SET_GPR_U32(ctx, 31, 0x2A1274u);
    ctx->pc = 0x2A1270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A126Cu;
    // 0x2a1270: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x2A126Cu, 0x2A1274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1274u;
label_2a1274:
    // 0x2a1274: 0x92a400c5  lbu         $a0, 0xC5($s5)
    ctx->pc = 0x2a1274u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 197)));
    // 0x2a1278: 0x8ec30094  lw          $v1, 0x94($s6)
    ctx->pc = 0x2a1278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x2a127c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2a127cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2a1280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1284: 0xaea300c0  sw          $v1, 0xC0($s5)
    ctx->pc = 0x2a1284u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 3));
label_2a1288:
    // 0x2a1288: 0x26b500e0  addiu       $s5, $s5, 0xE0
    ctx->pc = 0x2a1288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x2a128c: 0x2b4182b  sltu        $v1, $s5, $s4
    ctx->pc = 0x2a128cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2a1290: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a1290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a1294: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a1294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a1298: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2A1298u;
    {
        const bool branch_taken_0x2a1298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1298u;
        // 0x2a129c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1298) {
            ctx->pc = 0x2A11A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a11a0;
        }
    }
    ctx->pc = 0x2A12A0u;
    // 0x2a12a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a12a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a12a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a12a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a12a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a12a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a12ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a12acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a12b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a12b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a12b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a12b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a12b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a12b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a12bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a12bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a12c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A12C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12C0u;
        // 0x2a12c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A12C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A12C8u;
}
