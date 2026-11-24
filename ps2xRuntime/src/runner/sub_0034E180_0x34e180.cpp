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

// Function: sub_0034E180
// Address: 0x34e180 - 0x34e738
void sub_0034E180_0x34e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E180_0x34e180");
#endif

    switch (ctx->pc) {
        case 0x34e1bcu: goto label_34e1bc;
        case 0x34e1e0u: goto label_34e1e0;
        case 0x34e238u: goto label_34e238;
        case 0x34e2a4u: goto label_34e2a4;
        case 0x34e2e4u: goto label_34e2e4;
        case 0x34e2f0u: goto label_34e2f0;
        case 0x34e2fcu: goto label_34e2fc;
        case 0x34e31cu: goto label_34e31c;
        case 0x34e328u: goto label_34e328;
        case 0x34e334u: goto label_34e334;
        case 0x34e348u: goto label_34e348;
        case 0x34e370u: goto label_34e370;
        case 0x34e37cu: goto label_34e37c;
        case 0x34e388u: goto label_34e388;
        case 0x34e3a4u: goto label_34e3a4;
        case 0x34e3b0u: goto label_34e3b0;
        case 0x34e3bcu: goto label_34e3bc;
        case 0x34e3d4u: goto label_34e3d4;
        case 0x34e3ecu: goto label_34e3ec;
        case 0x34e3f8u: goto label_34e3f8;
        case 0x34e40cu: goto label_34e40c;
        case 0x34e418u: goto label_34e418;
        case 0x34e42cu: goto label_34e42c;
        case 0x34e444u: goto label_34e444;
        case 0x34e450u: goto label_34e450;
        case 0x34e464u: goto label_34e464;
        case 0x34e47cu: goto label_34e47c;
        case 0x34e488u: goto label_34e488;
        case 0x34e49cu: goto label_34e49c;
        case 0x34e4b4u: goto label_34e4b4;
        case 0x34e4c0u: goto label_34e4c0;
        case 0x34e4d4u: goto label_34e4d4;
        case 0x34e4ecu: goto label_34e4ec;
        case 0x34e4f8u: goto label_34e4f8;
        case 0x34e50cu: goto label_34e50c;
        case 0x34e524u: goto label_34e524;
        case 0x34e530u: goto label_34e530;
        case 0x34e544u: goto label_34e544;
        case 0x34e55cu: goto label_34e55c;
        case 0x34e568u: goto label_34e568;
        case 0x34e57cu: goto label_34e57c;
        case 0x34e594u: goto label_34e594;
        case 0x34e5a0u: goto label_34e5a0;
        case 0x34e5b4u: goto label_34e5b4;
        case 0x34e5ccu: goto label_34e5cc;
        case 0x34e5ecu: goto label_34e5ec;
        case 0x34e5f8u: goto label_34e5f8;
        case 0x34e60cu: goto label_34e60c;
        case 0x34e640u: goto label_34e640;
        case 0x34e660u: goto label_34e660;
        case 0x34e6a0u: goto label_34e6a0;
        case 0x34e6acu: goto label_34e6ac;
        case 0x34e6d0u: goto label_34e6d0;
        case 0x34e6ecu: goto label_34e6ec;
        default: break;
    }

    ctx->pc = 0x34e180u;

label_34e180:
    // 0x34e180: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x34e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x34e184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34e184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e188: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x34e188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x34e18c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x34e18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x34e190: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x34e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x34e194: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34e194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x34e198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34e198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x34e19c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34e1a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34e1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34e1a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34e1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34e1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34e1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e1b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34e1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e1b4: 0xc0d37d0  jal         func_34DF40
    ctx->pc = 0x34E1B4u;
    SET_GPR_U32(ctx, 31, 0x34E1BCu);
    ctx->pc = 0x34E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E1B4u;
    // 0x34e1b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF40u, 0x34E1B4u, 0x34E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1BCu;
label_34e1bc:
    // 0x34e1bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E1BCu;
    {
        const bool branch_taken_0x34e1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1bc) {
            ctx->pc = 0x34E1D0u;
            goto label_34e1d0;
        }
    }
    ctx->pc = 0x34E1C4u;
    // 0x34e1c4: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x34E1C4u;
    {
        const bool branch_taken_0x34e1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1c4) {
            ctx->pc = 0x34E708u;
            goto label_34e708;
        }
    }
    ctx->pc = 0x34E1CCu;
    // 0x34e1cc: 0x0  nop
    ctx->pc = 0x34e1ccu;
    // NOP
label_34e1d0:
    // 0x34e1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e1d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34e1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e1d8: 0xc0d37d0  jal         func_34DF40
    ctx->pc = 0x34E1D8u;
    SET_GPR_U32(ctx, 31, 0x34E1E0u);
    ctx->pc = 0x34E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E1D8u;
    // 0x34e1dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF40u, 0x34E1D8u, 0x34E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1E0u;
label_34e1e0:
    // 0x34e1e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x34e1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e1e4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E1E4u;
    {
        const bool branch_taken_0x34e1e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e1e4) {
            ctx->pc = 0x34E1F8u;
            goto label_34e1f8;
        }
    }
    ctx->pc = 0x34E1ECu;
    // 0x34e1ec: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x34E1ECu;
    {
        const bool branch_taken_0x34e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E1ECu;
        // 0x34e1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e1ec) {
            ctx->pc = 0x34E708u;
            goto label_34e708;
        }
    }
    ctx->pc = 0x34E1F4u;
    // 0x34e1f4: 0x0  nop
    ctx->pc = 0x34e1f4u;
    // NOP
label_34e1f8:
    // 0x34e1f8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x34e1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34e1fc: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x34e1fcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x34e200: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x34e200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x34e204: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34e204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34e208: 0x24637d74  addiu       $v1, $v1, 0x7D74
    ctx->pc = 0x34e208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32116));
    // 0x34e20c: 0x24427d71  addiu       $v0, $v0, 0x7D71
    ctx->pc = 0x34e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32113));
    // 0x34e210: 0xa2500000  sb          $s0, 0x0($s2)
    ctx->pc = 0x34e210u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x34e214: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x34e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x34e218: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x34e218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x34e21c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x34e21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e220: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34E220u;
    {
        const bool branch_taken_0x34e220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E220u;
        // 0x34e224: 0x8c740000  lw          $s4, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e220) {
            ctx->pc = 0x34E268u;
            goto label_34e268;
        }
    }
    ctx->pc = 0x34E228u;
    // 0x34e228: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34e228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34e22c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x34e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x34e230: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34E230u;
    SET_GPR_U32(ctx, 31, 0x34E238u);
    ctx->pc = 0x34E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E230u;
    // 0x34e234: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34E230u, 0x34E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E238u;
label_34e238:
    // 0x34e238: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x34e238u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34e23c: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x34e23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x34e240: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x34e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x34e244: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x34e244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34e248: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x34e248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34e24c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34e250: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x34e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x34e254: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x34e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e258: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x34e258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34e25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e260: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x34e260u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e264: 0x0  nop
    ctx->pc = 0x34e264u;
    // NOP
label_34e268:
    // 0x34e268: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x34e268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x34e26c: 0x24637d78  addiu       $v1, $v1, 0x7D78
    ctx->pc = 0x34e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32120));
    // 0x34e270: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34e270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34e274: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x34e274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x34e278: 0x24427d7c  addiu       $v0, $v0, 0x7D7C
    ctx->pc = 0x34e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32124));
    // 0x34e27c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x34e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x34e280: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x34e280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34e284: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34e284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34e288: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x34e288u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34e28c: 0x24427d7d  addiu       $v0, $v0, 0x7D7D
    ctx->pc = 0x34e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32125));
    // 0x34e290: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34e290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e294: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x34e294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x34e298: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x34e298u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e29c: 0xc0d4418  jal         func_351060
    ctx->pc = 0x34E29Cu;
    SET_GPR_U32(ctx, 31, 0x34E2A4u);
    ctx->pc = 0x34E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E29Cu;
    // 0x34e2a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351060u, 0x34E29Cu, 0x34E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E2A4u;
label_34e2a4:
    // 0x34e2a4: 0x321300ff  andi        $s3, $s0, 0xFF
    ctx->pc = 0x34e2a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34e2a8: 0x2e610012  sltiu       $at, $s3, 0x12
    ctx->pc = 0x34e2a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x34e2ac: 0x102000d8  beqz        $at, . + 4 + (0xD8 << 2)
    ctx->pc = 0x34E2ACu;
    {
        const bool branch_taken_0x34e2ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E2ACu;
        // 0x34e2b0: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e2ac) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E2B4u;
    // 0x34e2b4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x34e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x34e2b8: 0x2463f680  addiu       $v1, $v1, -0x980
    ctx->pc = 0x34e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964864));
    // 0x34e2bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e2c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e2c4: 0x400008  jr          $v0
    ctx->pc = 0x34E2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34E2D0u: goto label_34e2d0;
            case 0x34E308u: goto label_34e308;
            case 0x34E340u: goto label_34e340;
            case 0x34E390u: goto label_34e390;
            case 0x34E3C8u: goto label_34e3c8;
            case 0x34E3E0u: goto label_34e3e0;
            case 0x34E400u: goto label_34e400;
            case 0x34E438u: goto label_34e438;
            case 0x34E470u: goto label_34e470;
            case 0x34E4A8u: goto label_34e4a8;
            case 0x34E4E0u: goto label_34e4e0;
            case 0x34E518u: goto label_34e518;
            case 0x34E550u: goto label_34e550;
            case 0x34E588u: goto label_34e588;
            case 0x34E5C0u: goto label_34e5c0;
            case 0x34E5D8u: goto label_34e5d8;
            case 0x34E600u: goto label_34e600;
            case 0x34E610u: goto label_34e610;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E2C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34E2CCu;
    // 0x34e2cc: 0x0  nop
    ctx->pc = 0x34e2ccu;
    // NOP
label_34e2d0:
    // 0x34e2d0: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34e2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e2dc: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E2DCu;
    SET_GPR_U32(ctx, 31, 0x34E2E4u);
    ctx->pc = 0x34E2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E2DCu;
    // 0x34e2e0: 0x34450002  ori         $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E2DCu, 0x34E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E2E4u;
label_34e2e4:
    // 0x34e2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2e8: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E2E8u;
    SET_GPR_U32(ctx, 31, 0x34E2F0u);
    ctx->pc = 0x34E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E2E8u;
    // 0x34e2ec: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E2E8u, 0x34E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E2F0u;
label_34e2f0:
    // 0x34e2f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2f4: 0xc0d3aa4  jal         func_34EA90
    ctx->pc = 0x34E2F4u;
    SET_GPR_U32(ctx, 31, 0x34E2FCu);
    ctx->pc = 0x34E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E2F4u;
    // 0x34e2f8: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA90u, 0x34E2F4u, 0x34E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E2FCu;
label_34e2fc:
    // 0x34e2fc: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x34E2FCu;
    {
        const bool branch_taken_0x34e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e2fc) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E304u;
    // 0x34e304: 0x0  nop
    ctx->pc = 0x34e304u;
    // NOP
label_34e308:
    // 0x34e308: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e310: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34e310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e314: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E314u;
    SET_GPR_U32(ctx, 31, 0x34E31Cu);
    ctx->pc = 0x34E318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E314u;
    // 0x34e318: 0x34450002  ori         $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E314u, 0x34E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E31Cu;
label_34e31c:
    // 0x34e31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e320: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E320u;
    SET_GPR_U32(ctx, 31, 0x34E328u);
    ctx->pc = 0x34E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E320u;
    // 0x34e324: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E320u, 0x34E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E328u;
label_34e328:
    // 0x34e328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e32c: 0xc0d3aa4  jal         func_34EA90
    ctx->pc = 0x34E32Cu;
    SET_GPR_U32(ctx, 31, 0x34E334u);
    ctx->pc = 0x34E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E32Cu;
    // 0x34e330: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA90u, 0x34E32Cu, 0x34E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E334u;
label_34e334:
    // 0x34e334: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x34E334u;
    {
        const bool branch_taken_0x34e334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e334) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E33Cu;
    // 0x34e33c: 0x0  nop
    ctx->pc = 0x34e33cu;
    // NOP
label_34e340:
    // 0x34e340: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x34E340u;
    SET_GPR_U32(ctx, 31, 0x34E348u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x34E340u, 0x34E348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E348u;
label_34e348:
    // 0x34e348: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x34e348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x34e34c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x34e34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x34e350: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34e350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34e354: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E354u;
    {
        const bool branch_taken_0x34e354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e354) {
            ctx->pc = 0x34E370u;
            goto label_34e370;
        }
    }
    ctx->pc = 0x34E35Cu;
    // 0x34e35c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e364: 0x34450002  ori         $a1, $v0, 0x2
    ctx->pc = 0x34e364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x34e368: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E368u;
    SET_GPR_U32(ctx, 31, 0x34E370u);
    ctx->pc = 0x34E36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E368u;
    // 0x34e36c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E368u, 0x34E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E370u;
label_34e370:
    // 0x34e370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e374: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E374u;
    SET_GPR_U32(ctx, 31, 0x34E37Cu);
    ctx->pc = 0x34E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E374u;
    // 0x34e378: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E374u, 0x34E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E37Cu;
label_34e37c:
    // 0x34e37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e380: 0xc0d3aa4  jal         func_34EA90
    ctx->pc = 0x34E380u;
    SET_GPR_U32(ctx, 31, 0x34E388u);
    ctx->pc = 0x34E384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E380u;
    // 0x34e384: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA90u, 0x34E380u, 0x34E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E388u;
label_34e388:
    // 0x34e388: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x34E388u;
    {
        const bool branch_taken_0x34e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e388) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E390u;
label_34e390:
    // 0x34e390: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e398: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34e398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e39c: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E39Cu;
    SET_GPR_U32(ctx, 31, 0x34E3A4u);
    ctx->pc = 0x34E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E39Cu;
    // 0x34e3a0: 0x34450002  ori         $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E39Cu, 0x34E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E3A4u;
label_34e3a4:
    // 0x34e3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3a8: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E3A8u;
    SET_GPR_U32(ctx, 31, 0x34E3B0u);
    ctx->pc = 0x34E3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E3A8u;
    // 0x34e3ac: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E3A8u, 0x34E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E3B0u;
label_34e3b0:
    // 0x34e3b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3b4: 0xc0d3aa4  jal         func_34EA90
    ctx->pc = 0x34E3B4u;
    SET_GPR_U32(ctx, 31, 0x34E3BCu);
    ctx->pc = 0x34E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E3B4u;
    // 0x34e3b8: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA90u, 0x34E3B4u, 0x34E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E3BCu;
label_34e3bc:
    // 0x34e3bc: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x34E3BCu;
    {
        const bool branch_taken_0x34e3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e3bc) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E3C4u;
    // 0x34e3c4: 0x0  nop
    ctx->pc = 0x34e3c4u;
    // NOP
label_34e3c8:
    // 0x34e3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3cc: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E3CCu;
    SET_GPR_U32(ctx, 31, 0x34E3D4u);
    ctx->pc = 0x34E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E3CCu;
    // 0x34e3d0: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E3CCu, 0x34E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E3D4u;
label_34e3d4:
    // 0x34e3d4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x34E3D4u;
    {
        const bool branch_taken_0x34e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e3d4) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E3DCu;
    // 0x34e3dc: 0x0  nop
    ctx->pc = 0x34e3dcu;
    // NOP
label_34e3e0:
    // 0x34e3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3e4: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E3E4u;
    SET_GPR_U32(ctx, 31, 0x34E3ECu);
    ctx->pc = 0x34E3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E3E4u;
    // 0x34e3e8: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E3E4u, 0x34E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E3ECu;
label_34e3ec:
    // 0x34e3ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3f0: 0xc0d3aa4  jal         func_34EA90
    ctx->pc = 0x34E3F0u;
    SET_GPR_U32(ctx, 31, 0x34E3F8u);
    ctx->pc = 0x34E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E3F0u;
    // 0x34e3f4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA90u, 0x34E3F0u, 0x34E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E3F8u;
label_34e3f8:
    // 0x34e3f8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x34E3F8u;
    {
        const bool branch_taken_0x34e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e3f8) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E400u;
label_34e400:
    // 0x34e400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e404: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E404u;
    SET_GPR_U32(ctx, 31, 0x34E40Cu);
    ctx->pc = 0x34E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E404u;
    // 0x34e408: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E404u, 0x34E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E40Cu;
label_34e40c:
    // 0x34e40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e410: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34E410u;
    SET_GPR_U32(ctx, 31, 0x34E418u);
    ctx->pc = 0x34E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E410u;
    // 0x34e414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    goto label_34e180;
    ctx->pc = 0x34E418u;
label_34e418:
    // 0x34e418: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e41c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e420: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x34e420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e424: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E424u;
    SET_GPR_U32(ctx, 31, 0x34E42Cu);
    ctx->pc = 0x34E428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E424u;
    // 0x34e428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E424u, 0x34E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E42Cu;
label_34e42c:
    // 0x34e42c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x34E42Cu;
    {
        const bool branch_taken_0x34e42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e42c) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E434u;
    // 0x34e434: 0x0  nop
    ctx->pc = 0x34e434u;
    // NOP
label_34e438:
    // 0x34e438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e43c: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E43Cu;
    SET_GPR_U32(ctx, 31, 0x34E444u);
    ctx->pc = 0x34E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E43Cu;
    // 0x34e440: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E43Cu, 0x34E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E444u;
label_34e444:
    // 0x34e444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e448: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34E448u;
    SET_GPR_U32(ctx, 31, 0x34E450u);
    ctx->pc = 0x34E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E448u;
    // 0x34e44c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    goto label_34e180;
    ctx->pc = 0x34E450u;
label_34e450:
    // 0x34e450: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e454: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34e454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34e458: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x34e458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e45c: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E45Cu;
    SET_GPR_U32(ctx, 31, 0x34E464u);
    ctx->pc = 0x34E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E45Cu;
    // 0x34e460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E45Cu, 0x34E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E464u;
label_34e464:
    // 0x34e464: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x34E464u;
    {
        const bool branch_taken_0x34e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e464) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E46Cu;
    // 0x34e46c: 0x0  nop
    ctx->pc = 0x34e46cu;
    // NOP
label_34e470:
    // 0x34e470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e474: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E474u;
    SET_GPR_U32(ctx, 31, 0x34E47Cu);
    ctx->pc = 0x34E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E474u;
    // 0x34e478: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E474u, 0x34E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E47Cu;
label_34e47c:
    // 0x34e47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e480: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34E480u;
    SET_GPR_U32(ctx, 31, 0x34E488u);
    ctx->pc = 0x34E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E480u;
    // 0x34e484: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    goto label_34e180;
    ctx->pc = 0x34E488u;
label_34e488:
    // 0x34e488: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e48c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34e490: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x34e490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e494: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E494u;
    SET_GPR_U32(ctx, 31, 0x34E49Cu);
    ctx->pc = 0x34E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E494u;
    // 0x34e498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E494u, 0x34E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E49Cu;
label_34e49c:
    // 0x34e49c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x34E49Cu;
    {
        const bool branch_taken_0x34e49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e49c) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E4A4u;
    // 0x34e4a4: 0x0  nop
    ctx->pc = 0x34e4a4u;
    // NOP
label_34e4a8:
    // 0x34e4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4ac: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E4ACu;
    SET_GPR_U32(ctx, 31, 0x34E4B4u);
    ctx->pc = 0x34E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E4ACu;
    // 0x34e4b0: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E4ACu, 0x34E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4B4u;
label_34e4b4:
    // 0x34e4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4b8: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34E4B8u;
    SET_GPR_U32(ctx, 31, 0x34E4C0u);
    ctx->pc = 0x34E4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E4B8u;
    // 0x34e4bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    goto label_34e180;
    ctx->pc = 0x34E4C0u;
label_34e4c0:
    // 0x34e4c0: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e4c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34e4c8: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x34e4c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e4cc: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E4CCu;
    SET_GPR_U32(ctx, 31, 0x34E4D4u);
    ctx->pc = 0x34E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E4CCu;
    // 0x34e4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E4CCu, 0x34E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4D4u;
label_34e4d4:
    // 0x34e4d4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x34E4D4u;
    {
        const bool branch_taken_0x34e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e4d4) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E4DCu;
    // 0x34e4dc: 0x0  nop
    ctx->pc = 0x34e4dcu;
    // NOP
label_34e4e0:
    // 0x34e4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4e4: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E4E4u;
    SET_GPR_U32(ctx, 31, 0x34E4ECu);
    ctx->pc = 0x34E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E4E4u;
    // 0x34e4e8: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E4E4u, 0x34E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4ECu;
label_34e4ec:
    // 0x34e4ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4f0: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34E4F0u;
    SET_GPR_U32(ctx, 31, 0x34E4F8u);
    ctx->pc = 0x34E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E4F0u;
    // 0x34e4f4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    goto label_34e180;
    ctx->pc = 0x34E4F8u;
label_34e4f8:
    // 0x34e4f8: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e4fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34e500: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x34e500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e504: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E504u;
    SET_GPR_U32(ctx, 31, 0x34E50Cu);
    ctx->pc = 0x34E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E504u;
    // 0x34e508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E504u, 0x34E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E50Cu;
label_34e50c:
    // 0x34e50c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x34E50Cu;
    {
        const bool branch_taken_0x34e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e50c) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E514u;
    // 0x34e514: 0x0  nop
    ctx->pc = 0x34e514u;
    // NOP
label_34e518:
    // 0x34e518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e51c: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E51Cu;
    SET_GPR_U32(ctx, 31, 0x34E524u);
    ctx->pc = 0x34E520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E51Cu;
    // 0x34e520: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E51Cu, 0x34E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E524u;
label_34e524:
    // 0x34e524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e528: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34E528u;
    SET_GPR_U32(ctx, 31, 0x34E530u);
    ctx->pc = 0x34E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E528u;
    // 0x34e52c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    goto label_34e180;
    ctx->pc = 0x34E530u;
label_34e530:
    // 0x34e530: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e534: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34e534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34e538: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x34e538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e53c: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E53Cu;
    SET_GPR_U32(ctx, 31, 0x34E544u);
    ctx->pc = 0x34E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E53Cu;
    // 0x34e540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E53Cu, 0x34E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E544u;
label_34e544:
    // 0x34e544: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x34E544u;
    {
        const bool branch_taken_0x34e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e544) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E54Cu;
    // 0x34e54c: 0x0  nop
    ctx->pc = 0x34e54cu;
    // NOP
label_34e550:
    // 0x34e550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e554: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E554u;
    SET_GPR_U32(ctx, 31, 0x34E55Cu);
    ctx->pc = 0x34E558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E554u;
    // 0x34e558: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E554u, 0x34E55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E55Cu;
label_34e55c:
    // 0x34e55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e560: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34E560u;
    SET_GPR_U32(ctx, 31, 0x34E568u);
    ctx->pc = 0x34E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E560u;
    // 0x34e564: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    goto label_34e180;
    ctx->pc = 0x34E568u;
label_34e568:
    // 0x34e568: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e56c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34e570: 0x34450005  ori         $a1, $v0, 0x5
    ctx->pc = 0x34e570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x34e574: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E574u;
    SET_GPR_U32(ctx, 31, 0x34E57Cu);
    ctx->pc = 0x34E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E574u;
    // 0x34e578: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E574u, 0x34E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E57Cu;
label_34e57c:
    // 0x34e57c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x34E57Cu;
    {
        const bool branch_taken_0x34e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e57c) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E584u;
    // 0x34e584: 0x0  nop
    ctx->pc = 0x34e584u;
    // NOP
label_34e588:
    // 0x34e588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e58c: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E58Cu;
    SET_GPR_U32(ctx, 31, 0x34E594u);
    ctx->pc = 0x34E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E58Cu;
    // 0x34e590: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E58Cu, 0x34E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E594u;
label_34e594:
    // 0x34e594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e598: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34E598u;
    SET_GPR_U32(ctx, 31, 0x34E5A0u);
    ctx->pc = 0x34E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E598u;
    // 0x34e59c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    goto label_34e180;
    ctx->pc = 0x34E5A0u;
label_34e5a0:
    // 0x34e5a0: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e5a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34e5a8: 0x34450004  ori         $a1, $v0, 0x4
    ctx->pc = 0x34e5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x34e5ac: 0xc0d35b0  jal         func_34D6C0
    ctx->pc = 0x34E5ACu;
    SET_GPR_U32(ctx, 31, 0x34E5B4u);
    ctx->pc = 0x34E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E5ACu;
    // 0x34e5b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6C0u, 0x34E5ACu, 0x34E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5B4u;
label_34e5b4:
    // 0x34e5b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34E5B4u;
    {
        const bool branch_taken_0x34e5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e5b4) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E5BCu;
    // 0x34e5bc: 0x0  nop
    ctx->pc = 0x34e5bcu;
    // NOP
label_34e5c0:
    // 0x34e5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5c4: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E5C4u;
    SET_GPR_U32(ctx, 31, 0x34E5CCu);
    ctx->pc = 0x34E5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E5C4u;
    // 0x34e5c8: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E5C4u, 0x34E5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5CCu;
label_34e5cc:
    // 0x34e5cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x34E5CCu;
    {
        const bool branch_taken_0x34e5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e5cc) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E5D4u;
    // 0x34e5d4: 0x0  nop
    ctx->pc = 0x34e5d4u;
    // NOP
label_34e5d8:
    // 0x34e5d8: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34e5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34e5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5e4: 0xc0d3644  jal         func_34D910
    ctx->pc = 0x34E5E4u;
    SET_GPR_U32(ctx, 31, 0x34E5ECu);
    ctx->pc = 0x34E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E5E4u;
    // 0x34e5e8: 0x3445000f  ori         $a1, $v0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D910u, 0x34E5E4u, 0x34E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5ECu;
label_34e5ec:
    // 0x34e5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5f0: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E5F0u;
    SET_GPR_U32(ctx, 31, 0x34E5F8u);
    ctx->pc = 0x34E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E5F0u;
    // 0x34e5f4: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E5F0u, 0x34E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5F8u;
label_34e5f8:
    // 0x34e5f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34E5F8u;
    {
        const bool branch_taken_0x34e5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e5f8) {
            ctx->pc = 0x34E610u;
            goto label_34e610;
        }
    }
    ctx->pc = 0x34E600u;
label_34e600:
    // 0x34e600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e604: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34E604u;
    SET_GPR_U32(ctx, 31, 0x34E60Cu);
    ctx->pc = 0x34E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E604u;
    // 0x34e608: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34E604u, 0x34E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E60Cu;
label_34e60c:
    // 0x34e60c: 0x0  nop
    ctx->pc = 0x34e60cu;
    // NOP
label_34e610:
    // 0x34e610: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x34e610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x34e614: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x34E614u;
    {
        const bool branch_taken_0x34e614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E614u;
        // 0x34e618: 0x2a61000b  slti        $at, $s3, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e614) {
            ctx->pc = 0x34E700u;
            goto label_34e700;
        }
    }
    ctx->pc = 0x34E61Cu;
    // 0x34e61c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x34E61Cu;
    {
        const bool branch_taken_0x34e61c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E61Cu;
        // 0x34e620: 0x2662001a  addiu       $v0, $s3, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e61c) {
            ctx->pc = 0x34E700u;
            goto label_34e700;
        }
    }
    ctx->pc = 0x34E624u;
    // 0x34e624: 0x2663fffa  addiu       $v1, $s3, -0x6
    ctx->pc = 0x34e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967290));
    // 0x34e628: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x34e628u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34e62c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x34e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x34e630: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E630u;
    {
        const bool branch_taken_0x34e630 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x34E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E630u;
        // 0x34e634: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e630) {
            ctx->pc = 0x34E658u;
            goto label_34e658;
        }
    }
    ctx->pc = 0x34E638u;
    // 0x34e638: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x34E638u;
    SET_GPR_U32(ctx, 31, 0x34E640u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x34E638u, 0x34E640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E640u;
label_34e640:
    // 0x34e640: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x34e640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x34e644: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x34e644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x34e648: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34e648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34e64c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x34E64Cu;
    {
        const bool branch_taken_0x34e64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e64c) {
            ctx->pc = 0x34E700u;
            goto label_34e700;
        }
    }
    ctx->pc = 0x34E654u;
    // 0x34e654: 0x0  nop
    ctx->pc = 0x34e654u;
    // NOP
label_34e658:
    // 0x34e658: 0xc0d346c  jal         func_34D1B0
    ctx->pc = 0x34E658u;
    SET_GPR_U32(ctx, 31, 0x34E660u);
    ctx->pc = 0x34E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E658u;
    // 0x34e65c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D1B0u, 0x34E658u, 0x34E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E660u;
label_34e660:
    // 0x34e660: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x34e660u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34e664: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x34e664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x34e668: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x34e668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x34e66c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x34e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x34e670: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x34e670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34e674: 0x24637c50  addiu       $v1, $v1, 0x7C50
    ctx->pc = 0x34e674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31824));
    // 0x34e678: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34e678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34e67c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x34e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x34e680: 0x24427c54  addiu       $v0, $v0, 0x7C54
    ctx->pc = 0x34e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31828));
    // 0x34e684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34e684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34e688: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34e68c: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x34e68cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34e690: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x34e690u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e694: 0x15082b  sltu        $at, $zero, $s5
    ctx->pc = 0x34e694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x34e698: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x34E698u;
    {
        const bool branch_taken_0x34e698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E698u;
        // 0x34e69c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e698) {
            ctx->pc = 0x34E700u;
            goto label_34e700;
        }
    }
    ctx->pc = 0x34E6A0u;
label_34e6a0:
    // 0x34e6a0: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x34e6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x34e6a4: 0xc0d3498  jal         func_34D260
    ctx->pc = 0x34E6A4u;
    SET_GPR_U32(ctx, 31, 0x34E6ACu);
    ctx->pc = 0x34E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E6A4u;
    // 0x34e6a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D260u, 0x34E6A4u, 0x34E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E6ACu;
label_34e6ac:
    // 0x34e6ac: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x34e6acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34e6b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e6b4: 0x2621804  sllv        $v1, $v0, $s3
    ctx->pc = 0x34e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x34e6b8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x34e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x34e6bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34e6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34e6c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34E6C0u;
    {
        const bool branch_taken_0x34e6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E6C0u;
        // 0x34e6c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e6c0) {
            ctx->pc = 0x34E6F0u;
            goto label_34e6f0;
        }
    }
    ctx->pc = 0x34E6C8u;
    // 0x34e6c8: 0xc0d34b0  jal         func_34D2C0
    ctx->pc = 0x34E6C8u;
    SET_GPR_U32(ctx, 31, 0x34E6D0u);
    ctx->pc = 0x34D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D2C0u, 0x34E6C8u, 0x34E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E6D0u;
label_34e6d0:
    // 0x34e6d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34E6D0u;
    {
        const bool branch_taken_0x34e6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E6D0u;
        // 0x34e6d4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e6d0) {
            ctx->pc = 0x34E6F0u;
            goto label_34e6f0;
        }
    }
    ctx->pc = 0x34E6D8u;
    // 0x34e6d8: 0x2f42821  addu        $a1, $s7, $s4
    ctx->pc = 0x34e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x34e6dc: 0x3d43021  addu        $a2, $fp, $s4
    ctx->pc = 0x34e6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x34e6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e6e4: 0xc0d367c  jal         func_34D9F0
    ctx->pc = 0x34E6E4u;
    SET_GPR_U32(ctx, 31, 0x34E6ECu);
    ctx->pc = 0x34E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E6E4u;
    // 0x34e6e8: 0x2408007f  addiu       $t0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D9F0u, 0x34E6E4u, 0x34E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E6ECu;
label_34e6ec:
    // 0x34e6ec: 0x0  nop
    ctx->pc = 0x34e6ecu;
    // NOP
label_34e6f0:
    // 0x34e6f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34e6f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x34e6f4: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x34e6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x34e6f8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x34E6F8u;
    {
        const bool branch_taken_0x34e6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e6f8) {
            ctx->pc = 0x34E6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e6a0;
        }
    }
    ctx->pc = 0x34E700u;
label_34e700:
    // 0x34e700: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x34e700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e704: 0x0  nop
    ctx->pc = 0x34e704u;
    // NOP
label_34e708:
    // 0x34e708: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x34e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34e70c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x34e70cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34e710: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x34e710u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34e714: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34e714u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34e718: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34e718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34e71c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34e71cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e720: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34e720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34e724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e72c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e730: 0x3e00008  jr          $ra
    ctx->pc = 0x34E730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E730u;
        // 0x34e734: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E738u;
}
