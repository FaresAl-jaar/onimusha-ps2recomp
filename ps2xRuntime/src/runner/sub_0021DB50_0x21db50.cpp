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

// Function: sub_0021DB50
// Address: 0x21db50 - 0x21df1c
void sub_0021DB50_0x21db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DB50_0x21db50");
#endif

    switch (ctx->pc) {
        case 0x21db50u: goto label_21db50;
        case 0x21db54u: goto label_21db54;
        case 0x21db58u: goto label_21db58;
        case 0x21db5cu: goto label_21db5c;
        case 0x21db60u: goto label_21db60;
        case 0x21db64u: goto label_21db64;
        case 0x21db68u: goto label_21db68;
        case 0x21db6cu: goto label_21db6c;
        case 0x21db70u: goto label_21db70;
        case 0x21db74u: goto label_21db74;
        case 0x21db78u: goto label_21db78;
        case 0x21db7cu: goto label_21db7c;
        case 0x21db80u: goto label_21db80;
        case 0x21db84u: goto label_21db84;
        case 0x21db88u: goto label_21db88;
        case 0x21db8cu: goto label_21db8c;
        case 0x21db90u: goto label_21db90;
        case 0x21db94u: goto label_21db94;
        case 0x21db98u: goto label_21db98;
        case 0x21db9cu: goto label_21db9c;
        case 0x21dba0u: goto label_21dba0;
        case 0x21dba4u: goto label_21dba4;
        case 0x21dba8u: goto label_21dba8;
        case 0x21dbacu: goto label_21dbac;
        case 0x21dbb0u: goto label_21dbb0;
        case 0x21dbb4u: goto label_21dbb4;
        case 0x21dbb8u: goto label_21dbb8;
        case 0x21dbbcu: goto label_21dbbc;
        case 0x21dbc0u: goto label_21dbc0;
        case 0x21dbc4u: goto label_21dbc4;
        case 0x21dbc8u: goto label_21dbc8;
        case 0x21dbccu: goto label_21dbcc;
        case 0x21dbd0u: goto label_21dbd0;
        case 0x21dbd4u: goto label_21dbd4;
        case 0x21dbd8u: goto label_21dbd8;
        case 0x21dbdcu: goto label_21dbdc;
        case 0x21dbe0u: goto label_21dbe0;
        case 0x21dbe4u: goto label_21dbe4;
        case 0x21dbe8u: goto label_21dbe8;
        case 0x21dbecu: goto label_21dbec;
        case 0x21dbf0u: goto label_21dbf0;
        case 0x21dbf4u: goto label_21dbf4;
        case 0x21dbf8u: goto label_21dbf8;
        case 0x21dbfcu: goto label_21dbfc;
        case 0x21dc00u: goto label_21dc00;
        case 0x21dc04u: goto label_21dc04;
        case 0x21dc08u: goto label_21dc08;
        case 0x21dc0cu: goto label_21dc0c;
        case 0x21dc10u: goto label_21dc10;
        case 0x21dc14u: goto label_21dc14;
        case 0x21dc18u: goto label_21dc18;
        case 0x21dc1cu: goto label_21dc1c;
        case 0x21dc20u: goto label_21dc20;
        case 0x21dc24u: goto label_21dc24;
        case 0x21dc28u: goto label_21dc28;
        case 0x21dc2cu: goto label_21dc2c;
        case 0x21dc30u: goto label_21dc30;
        case 0x21dc34u: goto label_21dc34;
        case 0x21dc38u: goto label_21dc38;
        case 0x21dc3cu: goto label_21dc3c;
        case 0x21dc40u: goto label_21dc40;
        case 0x21dc44u: goto label_21dc44;
        case 0x21dc48u: goto label_21dc48;
        case 0x21dc4cu: goto label_21dc4c;
        case 0x21dc50u: goto label_21dc50;
        case 0x21dc54u: goto label_21dc54;
        case 0x21dc58u: goto label_21dc58;
        case 0x21dc5cu: goto label_21dc5c;
        case 0x21dc60u: goto label_21dc60;
        case 0x21dc64u: goto label_21dc64;
        case 0x21dc68u: goto label_21dc68;
        case 0x21dc6cu: goto label_21dc6c;
        case 0x21dc70u: goto label_21dc70;
        case 0x21dc74u: goto label_21dc74;
        case 0x21dc78u: goto label_21dc78;
        case 0x21dc7cu: goto label_21dc7c;
        case 0x21dc80u: goto label_21dc80;
        case 0x21dc84u: goto label_21dc84;
        case 0x21dc88u: goto label_21dc88;
        case 0x21dc8cu: goto label_21dc8c;
        case 0x21dc90u: goto label_21dc90;
        case 0x21dc94u: goto label_21dc94;
        case 0x21dc98u: goto label_21dc98;
        case 0x21dc9cu: goto label_21dc9c;
        case 0x21dca0u: goto label_21dca0;
        case 0x21dca4u: goto label_21dca4;
        case 0x21dca8u: goto label_21dca8;
        case 0x21dcacu: goto label_21dcac;
        case 0x21dcb0u: goto label_21dcb0;
        case 0x21dcb4u: goto label_21dcb4;
        case 0x21dcb8u: goto label_21dcb8;
        case 0x21dcbcu: goto label_21dcbc;
        case 0x21dcc0u: goto label_21dcc0;
        case 0x21dcc4u: goto label_21dcc4;
        case 0x21dcc8u: goto label_21dcc8;
        case 0x21dcccu: goto label_21dccc;
        case 0x21dcd0u: goto label_21dcd0;
        case 0x21dcd4u: goto label_21dcd4;
        case 0x21dcd8u: goto label_21dcd8;
        case 0x21dcdcu: goto label_21dcdc;
        case 0x21dce0u: goto label_21dce0;
        case 0x21dce4u: goto label_21dce4;
        case 0x21dce8u: goto label_21dce8;
        case 0x21dcecu: goto label_21dcec;
        case 0x21dcf0u: goto label_21dcf0;
        case 0x21dcf4u: goto label_21dcf4;
        case 0x21dcf8u: goto label_21dcf8;
        case 0x21dcfcu: goto label_21dcfc;
        case 0x21dd00u: goto label_21dd00;
        case 0x21dd04u: goto label_21dd04;
        case 0x21dd08u: goto label_21dd08;
        case 0x21dd0cu: goto label_21dd0c;
        case 0x21dd10u: goto label_21dd10;
        case 0x21dd14u: goto label_21dd14;
        case 0x21dd18u: goto label_21dd18;
        case 0x21dd1cu: goto label_21dd1c;
        case 0x21dd20u: goto label_21dd20;
        case 0x21dd24u: goto label_21dd24;
        case 0x21dd28u: goto label_21dd28;
        case 0x21dd2cu: goto label_21dd2c;
        case 0x21dd30u: goto label_21dd30;
        case 0x21dd34u: goto label_21dd34;
        case 0x21dd38u: goto label_21dd38;
        case 0x21dd3cu: goto label_21dd3c;
        case 0x21dd40u: goto label_21dd40;
        case 0x21dd44u: goto label_21dd44;
        case 0x21dd48u: goto label_21dd48;
        case 0x21dd4cu: goto label_21dd4c;
        case 0x21dd50u: goto label_21dd50;
        case 0x21dd54u: goto label_21dd54;
        case 0x21dd58u: goto label_21dd58;
        case 0x21dd5cu: goto label_21dd5c;
        case 0x21dd60u: goto label_21dd60;
        case 0x21dd64u: goto label_21dd64;
        case 0x21dd68u: goto label_21dd68;
        case 0x21dd6cu: goto label_21dd6c;
        case 0x21dd70u: goto label_21dd70;
        case 0x21dd74u: goto label_21dd74;
        case 0x21dd78u: goto label_21dd78;
        case 0x21dd7cu: goto label_21dd7c;
        case 0x21dd80u: goto label_21dd80;
        case 0x21dd84u: goto label_21dd84;
        case 0x21dd88u: goto label_21dd88;
        case 0x21dd8cu: goto label_21dd8c;
        case 0x21dd90u: goto label_21dd90;
        case 0x21dd94u: goto label_21dd94;
        case 0x21dd98u: goto label_21dd98;
        case 0x21dd9cu: goto label_21dd9c;
        case 0x21dda0u: goto label_21dda0;
        case 0x21dda4u: goto label_21dda4;
        case 0x21dda8u: goto label_21dda8;
        case 0x21ddacu: goto label_21ddac;
        case 0x21ddb0u: goto label_21ddb0;
        case 0x21ddb4u: goto label_21ddb4;
        case 0x21ddb8u: goto label_21ddb8;
        case 0x21ddbcu: goto label_21ddbc;
        case 0x21ddc0u: goto label_21ddc0;
        case 0x21ddc4u: goto label_21ddc4;
        case 0x21ddc8u: goto label_21ddc8;
        case 0x21ddccu: goto label_21ddcc;
        case 0x21ddd0u: goto label_21ddd0;
        case 0x21ddd4u: goto label_21ddd4;
        case 0x21ddd8u: goto label_21ddd8;
        case 0x21dddcu: goto label_21dddc;
        case 0x21dde0u: goto label_21dde0;
        case 0x21dde4u: goto label_21dde4;
        case 0x21dde8u: goto label_21dde8;
        case 0x21ddecu: goto label_21ddec;
        case 0x21ddf0u: goto label_21ddf0;
        case 0x21ddf4u: goto label_21ddf4;
        case 0x21ddf8u: goto label_21ddf8;
        case 0x21ddfcu: goto label_21ddfc;
        case 0x21de00u: goto label_21de00;
        case 0x21de04u: goto label_21de04;
        case 0x21de08u: goto label_21de08;
        case 0x21de0cu: goto label_21de0c;
        case 0x21de10u: goto label_21de10;
        case 0x21de14u: goto label_21de14;
        case 0x21de18u: goto label_21de18;
        case 0x21de1cu: goto label_21de1c;
        case 0x21de20u: goto label_21de20;
        case 0x21de24u: goto label_21de24;
        case 0x21de28u: goto label_21de28;
        case 0x21de2cu: goto label_21de2c;
        case 0x21de30u: goto label_21de30;
        case 0x21de34u: goto label_21de34;
        case 0x21de38u: goto label_21de38;
        case 0x21de3cu: goto label_21de3c;
        case 0x21de40u: goto label_21de40;
        case 0x21de44u: goto label_21de44;
        case 0x21de48u: goto label_21de48;
        case 0x21de4cu: goto label_21de4c;
        case 0x21de50u: goto label_21de50;
        case 0x21de54u: goto label_21de54;
        case 0x21de58u: goto label_21de58;
        case 0x21de5cu: goto label_21de5c;
        case 0x21de60u: goto label_21de60;
        case 0x21de64u: goto label_21de64;
        case 0x21de68u: goto label_21de68;
        case 0x21de6cu: goto label_21de6c;
        case 0x21de70u: goto label_21de70;
        case 0x21de74u: goto label_21de74;
        case 0x21de78u: goto label_21de78;
        case 0x21de7cu: goto label_21de7c;
        case 0x21de80u: goto label_21de80;
        case 0x21de84u: goto label_21de84;
        case 0x21de88u: goto label_21de88;
        case 0x21de8cu: goto label_21de8c;
        case 0x21de90u: goto label_21de90;
        case 0x21de94u: goto label_21de94;
        case 0x21de98u: goto label_21de98;
        case 0x21de9cu: goto label_21de9c;
        case 0x21dea0u: goto label_21dea0;
        case 0x21dea4u: goto label_21dea4;
        case 0x21dea8u: goto label_21dea8;
        case 0x21deacu: goto label_21deac;
        case 0x21deb0u: goto label_21deb0;
        case 0x21deb4u: goto label_21deb4;
        case 0x21deb8u: goto label_21deb8;
        case 0x21debcu: goto label_21debc;
        case 0x21dec0u: goto label_21dec0;
        case 0x21dec4u: goto label_21dec4;
        case 0x21dec8u: goto label_21dec8;
        case 0x21deccu: goto label_21decc;
        case 0x21ded0u: goto label_21ded0;
        case 0x21ded4u: goto label_21ded4;
        case 0x21ded8u: goto label_21ded8;
        case 0x21dedcu: goto label_21dedc;
        case 0x21dee0u: goto label_21dee0;
        case 0x21dee4u: goto label_21dee4;
        case 0x21dee8u: goto label_21dee8;
        case 0x21deecu: goto label_21deec;
        case 0x21def0u: goto label_21def0;
        case 0x21def4u: goto label_21def4;
        case 0x21def8u: goto label_21def8;
        case 0x21defcu: goto label_21defc;
        case 0x21df00u: goto label_21df00;
        case 0x21df04u: goto label_21df04;
        case 0x21df08u: goto label_21df08;
        case 0x21df0cu: goto label_21df0c;
        case 0x21df10u: goto label_21df10;
        case 0x21df14u: goto label_21df14;
        case 0x21df18u: goto label_21df18;
        default: break;
    }

    ctx->pc = 0x21db50u;

label_21db50:
    // 0x21db50: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x21db50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_21db54:
    // 0x21db54: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x21db54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
label_21db58:
    // 0x21db58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21db58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21db5c:
    // 0x21db5c: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x21db5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_21db60:
    // 0x21db60: 0xffb10298  sd          $s1, 0x298($sp)
    ctx->pc = 0x21db60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 17));
label_21db64:
    // 0x21db64: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x21db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_21db68:
    // 0x21db68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21db6c:
    // 0x21db6c: 0xffb302a8  sd          $s3, 0x2A8($sp)
    ctx->pc = 0x21db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 19));
label_21db70:
    // 0x21db70: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x21db70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21db74:
    // 0x21db74: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x21db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
label_21db78:
    // 0x21db78: 0xffb502b8  sd          $s5, 0x2B8($sp)
    ctx->pc = 0x21db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 21));
label_21db7c:
    // 0x21db7c: 0xffb602c0  sd          $s6, 0x2C0($sp)
    ctx->pc = 0x21db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 22));
label_21db80:
    // 0x21db80: 0xffb702c8  sd          $s7, 0x2C8($sp)
    ctx->pc = 0x21db80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 23));
label_21db84:
    // 0x21db84: 0xffbe02d0  sd          $fp, 0x2D0($sp)
    ctx->pc = 0x21db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 30));
label_21db88:
    // 0x21db88: 0xffbf02d8  sd          $ra, 0x2D8($sp)
    ctx->pc = 0x21db88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 31));
label_21db8c:
    // 0x21db8c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_21db90:
    if (ctx->pc == 0x21DB90u) {
        ctx->pc = 0x21DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB8Cu;
        // 0x21db90: 0xafa00250  sw          $zero, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB94u;
        goto label_21db94;
    }
    ctx->pc = 0x21DB8Cu;
    {
        const bool branch_taken_0x21db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB8Cu;
        // 0x21db90: 0xafa00250  sw          $zero, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db8c) {
            ctx->pc = 0x21DBF8u;
            goto label_21dbf8;
        }
    }
    ctx->pc = 0x21DB94u;
label_21db94:
    // 0x21db94: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x21db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_21db98:
    // 0x21db98: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x21db98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_21db9c:
    // 0x21db9c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x21db9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_21dba0:
    // 0x21dba0: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x21dba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_21dba4:
    // 0x21dba4: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x21dba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_21dba8:
    // 0x21dba8: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x21dba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_21dbac:
    // 0x21dbac: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x21dbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_21dbb0:
    // 0x21dbb0: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x21dbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_21dbb4:
    // 0x21dbb4: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x21dbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_21dbb8:
    // 0x21dbb8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x21dbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dbbc:
    // 0x21dbbc: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x21dbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dbc0:
    // 0x21dbc0: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x21dbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dbc4:
    // 0x21dbc4: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x21dbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dbc8:
    // 0x21dbc8: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x21dbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dbcc:
    // 0x21dbcc: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x21dbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dbd0:
    // 0x21dbd0: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x21dbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dbd4:
    // 0x21dbd4: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x21dbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dbd8:
    // 0x21dbd8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_21dbdc:
    // 0x21dbdc: 0x0  nop
    ctx->pc = 0x21dbdcu;
    // NOP
label_21dbe0:
    // 0x21dbe0: 0x0  nop
    ctx->pc = 0x21dbe0u;
    // NOP
label_21dbe4:
    // 0x21dbe4: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_21dbe8:
    if (ctx->pc == 0x21DBE8u) {
        ctx->pc = 0x21DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBE4u;
        // 0x21dbe8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DBECu;
        goto label_21dbec;
    }
    ctx->pc = 0x21DBE4u;
    {
        const bool branch_taken_0x21dbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBE4u;
        // 0x21dbe8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbe4) {
            ctx->pc = 0x21DB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21db98;
        }
    }
    ctx->pc = 0x21DBECu;
label_21dbec:
    // 0x21dbec: 0x10000010  b           . + 4 + (0x10 << 2)
label_21dbf0:
    if (ctx->pc == 0x21DBF0u) {
        ctx->pc = 0x21DBF4u;
        goto label_21dbf4;
    }
    ctx->pc = 0x21DBECu;
    {
        const bool branch_taken_0x21dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dbec) {
            ctx->pc = 0x21DC30u;
            goto label_21dc30;
        }
    }
    ctx->pc = 0x21DBF4u;
label_21dbf4:
    // 0x21dbf4: 0x0  nop
    ctx->pc = 0x21dbf4u;
    // NOP
label_21dbf8:
    // 0x21dbf8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x21dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_21dbfc:
    // 0x21dbfc: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x21dbfcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_21dc00:
    // 0x21dc00: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x21dc00u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_21dc04:
    // 0x21dc04: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x21dc04u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_21dc08:
    // 0x21dc08: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x21dc08u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_21dc0c:
    // 0x21dc0c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x21dc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_21dc10:
    // 0x21dc10: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x21dc10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_21dc14:
    // 0x21dc14: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x21dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_21dc18:
    // 0x21dc18: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x21dc18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_21dc1c:
    // 0x21dc1c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_21dc20:
    // 0x21dc20: 0x0  nop
    ctx->pc = 0x21dc20u;
    // NOP
label_21dc24:
    // 0x21dc24: 0x0  nop
    ctx->pc = 0x21dc24u;
    // NOP
label_21dc28:
    // 0x21dc28: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_21dc2c:
    if (ctx->pc == 0x21DC2Cu) {
        ctx->pc = 0x21DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC28u;
        // 0x21dc2c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC30u;
        goto label_21dc30;
    }
    ctx->pc = 0x21DC28u;
    {
        const bool branch_taken_0x21dc28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC28u;
        // 0x21dc2c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc28) {
            ctx->pc = 0x21DBFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dbfc;
        }
    }
    ctx->pc = 0x21DC30u;
label_21dc30:
    // 0x21dc30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21dc34:
    // 0x21dc34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21dc38:
    // 0x21dc38: 0x8e150a2c  lw          $s5, 0xA2C($s0)
    ctx->pc = 0x21dc38u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2604)));
label_21dc3c:
    // 0x21dc3c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_21dc40:
    if (ctx->pc == 0x21DC40u) {
        ctx->pc = 0x21DC44u;
        goto label_21dc44;
    }
    ctx->pc = 0x21DC3Cu;
    {
        const bool branch_taken_0x21dc3c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dc3c) {
            ctx->pc = 0x21DC58u;
            goto label_21dc58;
        }
    }
    ctx->pc = 0x21DC44u;
label_21dc44:
    // 0x21dc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21dc48:
    // 0x21dc48: 0xc0877ec  jal         func_21DFB0
label_21dc4c:
    if (ctx->pc == 0x21DC4Cu) {
        ctx->pc = 0x21DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC48u;
        // 0x21dc4c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC50u;
        goto label_21dc50;
    }
    ctx->pc = 0x21DC48u;
    SET_GPR_U32(ctx, 31, 0x21DC50u);
    ctx->pc = 0x21DC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC48u;
    // 0x21dc4c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DFB0u, 0x21DC48u, 0x21DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC50u;
label_21dc50:
    // 0x21dc50: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x21dc50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_21dc54:
    // 0x21dc54: 0xafa80250  sw          $t0, 0x250($sp)
    ctx->pc = 0x21dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 8));
label_21dc58:
    // 0x21dc58: 0xc0845a6  jal         func_211698
label_21dc5c:
    if (ctx->pc == 0x21DC5Cu) {
        ctx->pc = 0x21DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC58u;
        // 0x21dc5c: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC60u;
        goto label_21dc60;
    }
    ctx->pc = 0x21DC58u;
    SET_GPR_U32(ctx, 31, 0x21DC60u);
    ctx->pc = 0x21DC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC58u;
    // 0x21dc5c: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211698u, 0x21DC58u, 0x21DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC60u;
label_21dc60:
    // 0x21dc60: 0xc083bc0  jal         func_20EF00
label_21dc64:
    if (ctx->pc == 0x21DC64u) {
        ctx->pc = 0x21DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC60u;
        // 0x21dc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC68u;
        goto label_21dc68;
    }
    ctx->pc = 0x21DC60u;
    SET_GPR_U32(ctx, 31, 0x21DC68u);
    ctx->pc = 0x21DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC60u;
    // 0x21dc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x21DC60u, 0x21DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC68u;
label_21dc68:
    // 0x21dc68: 0x8e1609f8  lw          $s6, 0x9F8($s0)
    ctx->pc = 0x21dc68u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2552)));
label_21dc6c:
    // 0x21dc6c: 0x8e0609fc  lw          $a2, 0x9FC($s0)
    ctx->pc = 0x21dc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2556)));
label_21dc70:
    // 0x21dc70: 0x6a0212e7  ldl         $v0, 0x12E7($s0)
    ctx->pc = 0x21dc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_21dc74:
    // 0x21dc74: 0x6e0212e0  ldr         $v0, 0x12E0($s0)
    ctx->pc = 0x21dc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_21dc78:
    // 0x21dc78: 0x8e0312e8  lw          $v1, 0x12E8($s0)
    ctx->pc = 0x21dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4840)));
label_21dc7c:
    // 0x21dc7c: 0xb3a20247  sdl         $v0, 0x247($sp)
    ctx->pc = 0x21dc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dc80:
    // 0x21dc80: 0xb7a20240  sdr         $v0, 0x240($sp)
    ctx->pc = 0x21dc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21dc84:
    // 0x21dc84: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x21dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
label_21dc88:
    // 0x21dc88: 0x8e1236b0  lw          $s2, 0x36B0($s0)
    ctx->pc = 0x21dc88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
label_21dc8c:
    // 0x21dc8c: 0xafa60254  sw          $a2, 0x254($sp)
    ctx->pc = 0x21dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 6));
label_21dc90:
    // 0x21dc90: 0x8e071014  lw          $a3, 0x1014($s0)
    ctx->pc = 0x21dc90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
label_21dc94:
    // 0x21dc94: 0x8e170d40  lw          $s7, 0xD40($s0)
    ctx->pc = 0x21dc94u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3392)));
label_21dc98:
    // 0x21dc98: 0x8e1e1004  lw          $fp, 0x1004($s0)
    ctx->pc = 0x21dc98u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_21dc9c:
    // 0x21dc9c: 0xafa70258  sw          $a3, 0x258($sp)
    ctx->pc = 0x21dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 7));
label_21dca0:
    // 0x21dca0: 0x8e081018  lw          $t0, 0x1018($s0)
    ctx->pc = 0x21dca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4120)));
label_21dca4:
    // 0x21dca4: 0xafa8025c  sw          $t0, 0x25C($sp)
    ctx->pc = 0x21dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 8));
label_21dca8:
    // 0x21dca8: 0x8e020d48  lw          $v0, 0xD48($s0)
    ctx->pc = 0x21dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3400)));
label_21dcac:
    // 0x21dcac: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x21dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_21dcb0:
    // 0x21dcb0: 0x8e030fdc  lw          $v1, 0xFDC($s0)
    ctx->pc = 0x21dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4060)));
label_21dcb4:
    // 0x21dcb4: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_21dcb8:
    if (ctx->pc == 0x21DCB8u) {
        ctx->pc = 0x21DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCB4u;
        // 0x21dcb8: 0xafa30264  sw          $v1, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCBCu;
        goto label_21dcbc;
    }
    ctx->pc = 0x21DCB4u;
    {
        const bool branch_taken_0x21dcb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCB4u;
        // 0x21dcb8: 0xafa30264  sw          $v1, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcb4) {
            ctx->pc = 0x21DCE8u;
            goto label_21dce8;
        }
    }
    ctx->pc = 0x21DCBCu;
label_21dcbc:
    // 0x21dcbc: 0x8e440dd0  lw          $a0, 0xDD0($s2)
    ctx->pc = 0x21dcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3536)));
label_21dcc0:
    // 0x21dcc0: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x21dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
label_21dcc4:
    // 0x21dcc4: 0x8e450dc4  lw          $a1, 0xDC4($s2)
    ctx->pc = 0x21dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3524)));
label_21dcc8:
    // 0x21dcc8: 0xafa5026c  sw          $a1, 0x26C($sp)
    ctx->pc = 0x21dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 5));
label_21dccc:
    // 0x21dccc: 0x8e460dc8  lw          $a2, 0xDC8($s2)
    ctx->pc = 0x21dcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3528)));
label_21dcd0:
    // 0x21dcd0: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x21dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
label_21dcd4:
    // 0x21dcd4: 0x8e470dcc  lw          $a3, 0xDCC($s2)
    ctx->pc = 0x21dcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3532)));
label_21dcd8:
    // 0x21dcd8: 0xafa70274  sw          $a3, 0x274($sp)
    ctx->pc = 0x21dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 7));
label_21dcdc:
    // 0x21dcdc: 0x8e480dd4  lw          $t0, 0xDD4($s2)
    ctx->pc = 0x21dcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3540)));
label_21dce0:
    // 0x21dce0: 0x10000006  b           . + 4 + (0x6 << 2)
label_21dce4:
    if (ctx->pc == 0x21DCE4u) {
        ctx->pc = 0x21DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCE0u;
        // 0x21dce4: 0xafa80278  sw          $t0, 0x278($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCE8u;
        goto label_21dce8;
    }
    ctx->pc = 0x21DCE0u;
    {
        const bool branch_taken_0x21dce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCE0u;
        // 0x21dce4: 0xafa80278  sw          $t0, 0x278($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dce0) {
            ctx->pc = 0x21DCFCu;
            goto label_21dcfc;
        }
    }
    ctx->pc = 0x21DCE8u;
label_21dce8:
    // 0x21dce8: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x21dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
label_21dcec:
    // 0x21dcec: 0xafa00274  sw          $zero, 0x274($sp)
    ctx->pc = 0x21dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 0));
label_21dcf0:
    // 0x21dcf0: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x21dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_21dcf4:
    // 0x21dcf4: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x21dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_21dcf8:
    // 0x21dcf8: 0xafa00268  sw          $zero, 0x268($sp)
    ctx->pc = 0x21dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
label_21dcfc:
    // 0x21dcfc: 0x260313bc  addiu       $v1, $s0, 0x13BC
    ctx->pc = 0x21dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5052));
label_21dd00:
    // 0x21dd00: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x21dd00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_21dd04:
    // 0x21dd04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21dd08:
    // 0x21dd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21dd0c:
    // 0x21dd0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21dd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21dd10:
    // 0x21dd10: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x21dd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_21dd14:
    // 0x21dd14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21dd18:
    // 0x21dd18: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x21dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_21dd1c:
    // 0x21dd1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21dd20:
    // 0x21dd20: 0xc0852fc  jal         func_214BF0
label_21dd24:
    if (ctx->pc == 0x21DD24u) {
        ctx->pc = 0x21DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD20u;
        // 0x21dd24: 0xafa3027c  sw          $v1, 0x27C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD28u;
        goto label_21dd28;
    }
    ctx->pc = 0x21DD20u;
    SET_GPR_U32(ctx, 31, 0x21DD28u);
    ctx->pc = 0x21DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD20u;
    // 0x21dd24: 0xafa3027c  sw          $v1, 0x27C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214BF0u, 0x21DD20u, 0x21DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD28u;
label_21dd28:
    // 0x21dd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21dd2c:
    // 0x21dd2c: 0xc08764c  jal         func_21D930
label_21dd30:
    if (ctx->pc == 0x21DD30u) {
        ctx->pc = 0x21DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD2Cu;
        // 0x21dd30: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD34u;
        goto label_21dd34;
    }
    ctx->pc = 0x21DD2Cu;
    SET_GPR_U32(ctx, 31, 0x21DD34u);
    ctx->pc = 0x21DD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD2Cu;
    // 0x21dd30: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D930u, 0x21DD2Cu, 0x21DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD34u;
label_21dd34:
    // 0x21dd34: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
label_21dd38:
    if (ctx->pc == 0x21DD38u) {
        ctx->pc = 0x21DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD34u;
        // 0x21dd38: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD3Cu;
        goto label_21dd3c;
    }
    ctx->pc = 0x21DD34u;
    {
        const bool branch_taken_0x21dd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21dd34) {
            ctx->pc = 0x21DD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DD34u;
            // 0x21dd38: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DEF0u;
            goto label_21def0;
        }
    }
    ctx->pc = 0x21DD3Cu;
label_21dd3c:
    // 0x21dd3c: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x21dd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_21dd40:
    // 0x21dd40: 0x26050b9c  addiu       $a1, $s0, 0xB9C
    ctx->pc = 0x21dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2972));
label_21dd44:
    // 0x21dd44: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x21dd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_21dd48:
    // 0x21dd48: 0xc07eb68  jal         func_1FADA0
label_21dd4c:
    if (ctx->pc == 0x21DD4Cu) {
        ctx->pc = 0x21DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD48u;
        // 0x21dd4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD50u;
        goto label_21dd50;
    }
    ctx->pc = 0x21DD48u;
    SET_GPR_U32(ctx, 31, 0x21DD50u);
    ctx->pc = 0x21DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD48u;
    // 0x21dd4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x21DD48u, 0x21DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD50u;
label_21dd50:
    // 0x21dd50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21dd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dd54:
    // 0x21dd54: 0xc087504  jal         func_21D410
label_21dd58:
    if (ctx->pc == 0x21DD58u) {
        ctx->pc = 0x21DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD54u;
        // 0x21dd58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD5Cu;
        goto label_21dd5c;
    }
    ctx->pc = 0x21DD54u;
    SET_GPR_U32(ctx, 31, 0x21DD5Cu);
    ctx->pc = 0x21DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD54u;
    // 0x21dd58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D410u, 0x21DD54u, 0x21DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD5Cu;
label_21dd5c:
    // 0x21dd5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21dd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21dd60:
    // 0x21dd60: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_21dd64:
    if (ctx->pc == 0x21DD64u) {
        ctx->pc = 0x21DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD60u;
        // 0x21dd64: 0x26040a0c  addiu       $a0, $s0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD68u;
        goto label_21dd68;
    }
    ctx->pc = 0x21DD60u;
    {
        const bool branch_taken_0x21dd60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD60u;
        // 0x21dd64: 0x26040a0c  addiu       $a0, $s0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd60) {
            ctx->pc = 0x21DD80u;
            goto label_21dd80;
        }
    }
    ctx->pc = 0x21DD68u;
label_21dd68:
    // 0x21dd68: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_21dd6c:
    // 0x21dd6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21dd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dd70:
    // 0x21dd70: 0xc0848e0  jal         func_212380
label_21dd74:
    if (ctx->pc == 0x21DD74u) {
        ctx->pc = 0x21DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD70u;
        // 0x21dd74: 0x34a50202  ori         $a1, $a1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD78u;
        goto label_21dd78;
    }
    ctx->pc = 0x21DD70u;
    SET_GPR_U32(ctx, 31, 0x21DD78u);
    ctx->pc = 0x21DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD70u;
    // 0x21dd74: 0x34a50202  ori         $a1, $a1, 0x202 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21DD70u, 0x21DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD78u;
label_21dd78:
    // 0x21dd78: 0x1000005d  b           . + 4 + (0x5D << 2)
label_21dd7c:
    if (ctx->pc == 0x21DD7Cu) {
        ctx->pc = 0x21DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD78u;
        // 0x21dd7c: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD80u;
        goto label_21dd80;
    }
    ctx->pc = 0x21DD78u;
    {
        const bool branch_taken_0x21dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD78u;
        // 0x21dd7c: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd78) {
            ctx->pc = 0x21DEF0u;
            goto label_21def0;
        }
    }
    ctx->pc = 0x21DD80u;
label_21dd80:
    // 0x21dd80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21dd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21dd84:
    // 0x21dd84: 0xc07eb68  jal         func_1FADA0
label_21dd88:
    if (ctx->pc == 0x21DD88u) {
        ctx->pc = 0x21DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD84u;
        // 0x21dd88: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD8Cu;
        goto label_21dd8c;
    }
    ctx->pc = 0x21DD84u;
    SET_GPR_U32(ctx, 31, 0x21DD8Cu);
    ctx->pc = 0x21DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD84u;
    // 0x21dd88: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x21DD84u, 0x21DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD8Cu;
label_21dd8c:
    // 0x21dd8c: 0x26040b9c  addiu       $a0, $s0, 0xB9C
    ctx->pc = 0x21dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2972));
label_21dd90:
    // 0x21dd90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21dd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21dd94:
    // 0x21dd94: 0xc07eb68  jal         func_1FADA0
label_21dd98:
    if (ctx->pc == 0x21DD98u) {
        ctx->pc = 0x21DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD94u;
        // 0x21dd98: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD9Cu;
        goto label_21dd9c;
    }
    ctx->pc = 0x21DD94u;
    SET_GPR_U32(ctx, 31, 0x21DD9Cu);
    ctx->pc = 0x21DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD94u;
    // 0x21dd98: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x21DD94u, 0x21DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD9Cu;
label_21dd9c:
    // 0x21dd9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21dda0:
    // 0x21dda0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21dda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21dda4:
    // 0x21dda4: 0xc08531e  jal         func_214C78
label_21dda8:
    if (ctx->pc == 0x21DDA8u) {
        ctx->pc = 0x21DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDA4u;
        // 0x21dda8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDACu;
        goto label_21ddac;
    }
    ctx->pc = 0x21DDA4u;
    SET_GPR_U32(ctx, 31, 0x21DDACu);
    ctx->pc = 0x21DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDA4u;
    // 0x21dda8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214C78u, 0x21DDA4u, 0x21DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDACu;
label_21ddac:
    // 0x21ddac: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_21ddb0:
    if (ctx->pc == 0x21DDB0u) {
        ctx->pc = 0x21DDB4u;
        goto label_21ddb4;
    }
    ctx->pc = 0x21DDACu;
    {
        const bool branch_taken_0x21ddac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ddac) {
            ctx->pc = 0x21DDE8u;
            goto label_21dde8;
        }
    }
    ctx->pc = 0x21DDB4u;
label_21ddb4:
    // 0x21ddb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ddb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21ddb8:
    // 0x21ddb8: 0xc0877ec  jal         func_21DFB0
label_21ddbc:
    if (ctx->pc == 0x21DDBCu) {
        ctx->pc = 0x21DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDB8u;
        // 0x21ddbc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDC0u;
        goto label_21ddc0;
    }
    ctx->pc = 0x21DDB8u;
    SET_GPR_U32(ctx, 31, 0x21DDC0u);
    ctx->pc = 0x21DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDB8u;
    // 0x21ddbc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DFB0u, 0x21DDB8u, 0x21DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDC0u;
label_21ddc0:
    // 0x21ddc0: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
label_21ddc4:
    if (ctx->pc == 0x21DDC4u) {
        ctx->pc = 0x21DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDC0u;
        // 0x21ddc4: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDC8u;
        goto label_21ddc8;
    }
    ctx->pc = 0x21DDC0u;
    {
        const bool branch_taken_0x21ddc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ddc0) {
            ctx->pc = 0x21DDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DDC0u;
            // 0x21ddc4: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DEF0u;
            goto label_21def0;
        }
    }
    ctx->pc = 0x21DDC8u;
label_21ddc8:
    // 0x21ddc8: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x21ddc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_21ddcc:
    // 0x21ddcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21ddd0:
    // 0x21ddd0: 0xc087808  jal         func_21E020
label_21ddd4:
    if (ctx->pc == 0x21DDD4u) {
        ctx->pc = 0x21DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDD0u;
        // 0x21ddd4: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDD8u;
        goto label_21ddd8;
    }
    ctx->pc = 0x21DDD0u;
    SET_GPR_U32(ctx, 31, 0x21DDD8u);
    ctx->pc = 0x21DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDD0u;
    // 0x21ddd4: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E020u, 0x21DDD0u, 0x21DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDD8u;
label_21ddd8:
    // 0x21ddd8: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_21dddc:
    if (ctx->pc == 0x21DDDCu) {
        ctx->pc = 0x21DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDD8u;
        // 0x21dddc: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDE0u;
        goto label_21dde0;
    }
    ctx->pc = 0x21DDD8u;
    {
        const bool branch_taken_0x21ddd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ddd8) {
            ctx->pc = 0x21DDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DDD8u;
            // 0x21dddc: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DEF0u;
            goto label_21def0;
        }
    }
    ctx->pc = 0x21DDE0u;
label_21dde0:
    // 0x21dde0: 0xc087828  jal         func_21E0A0
label_21dde4:
    if (ctx->pc == 0x21DDE4u) {
        ctx->pc = 0x21DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDE0u;
        // 0x21dde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDE8u;
        goto label_21dde8;
    }
    ctx->pc = 0x21DDE0u;
    SET_GPR_U32(ctx, 31, 0x21DDE8u);
    ctx->pc = 0x21DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDE0u;
    // 0x21dde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E0A0u, 0x21DDE0u, 0x21DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDE8u;
label_21dde8:
    // 0x21dde8: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_21ddec:
    if (ctx->pc == 0x21DDECu) {
        ctx->pc = 0x21DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDE8u;
        // 0x21ddec: 0x8fa60254  lw          $a2, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDF0u;
        goto label_21ddf0;
    }
    ctx->pc = 0x21DDE8u;
    {
        const bool branch_taken_0x21dde8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDE8u;
        // 0x21ddec: 0x8fa60254  lw          $a2, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dde8) {
            ctx->pc = 0x21DDFCu;
            goto label_21ddfc;
        }
    }
    ctx->pc = 0x21DDF0u;
label_21ddf0:
    // 0x21ddf0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21ddf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21ddf4:
    // 0x21ddf4: 0xc08490c  jal         func_212430
label_21ddf8:
    if (ctx->pc == 0x21DDF8u) {
        ctx->pc = 0x21DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDF4u;
        // 0x21ddf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DDFCu;
        goto label_21ddfc;
    }
    ctx->pc = 0x21DDF4u;
    SET_GPR_U32(ctx, 31, 0x21DDFCu);
    ctx->pc = 0x21DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDF4u;
    // 0x21ddf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212430u, 0x21DDF4u, 0x21DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDFCu;
label_21ddfc:
    // 0x21ddfc: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_21de00:
    if (ctx->pc == 0x21DE00u) {
        ctx->pc = 0x21DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDFCu;
        // 0x21de00: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE04u;
        goto label_21de04;
    }
    ctx->pc = 0x21DDFCu;
    {
        const bool branch_taken_0x21ddfc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDFCu;
        // 0x21de00: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddfc) {
            ctx->pc = 0x21DE0Cu;
            goto label_21de0c;
        }
    }
    ctx->pc = 0x21DE04u;
label_21de04:
    // 0x21de04: 0xc08832c  jal         func_220CB0
label_21de08:
    if (ctx->pc == 0x21DE08u) {
        ctx->pc = 0x21DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE04u;
        // 0x21de08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE0Cu;
        goto label_21de0c;
    }
    ctx->pc = 0x21DE04u;
    SET_GPR_U32(ctx, 31, 0x21DE0Cu);
    ctx->pc = 0x21DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE04u;
    // 0x21de08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220CB0u, 0x21DE04u, 0x21DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE0Cu;
label_21de0c:
    // 0x21de0c: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_21de10:
    if (ctx->pc == 0x21DE10u) {
        ctx->pc = 0x21DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE0Cu;
        // 0x21de10: 0x8fa60258  lw          $a2, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE14u;
        goto label_21de14;
    }
    ctx->pc = 0x21DE0Cu;
    {
        const bool branch_taken_0x21de0c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE0Cu;
        // 0x21de10: 0x8fa60258  lw          $a2, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de0c) {
            ctx->pc = 0x21DE24u;
            goto label_21de24;
        }
    }
    ctx->pc = 0x21DE14u;
label_21de14:
    // 0x21de14: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x21de14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_21de18:
    // 0x21de18: 0x8fa7025c  lw          $a3, 0x25C($sp)
    ctx->pc = 0x21de18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_21de1c:
    // 0x21de1c: 0xc08834e  jal         func_220D38
label_21de20:
    if (ctx->pc == 0x21DE20u) {
        ctx->pc = 0x21DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE1Cu;
        // 0x21de20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE24u;
        goto label_21de24;
    }
    ctx->pc = 0x21DE1Cu;
    SET_GPR_U32(ctx, 31, 0x21DE24u);
    ctx->pc = 0x21DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE1Cu;
    // 0x21de20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220D38u, 0x21DE1Cu, 0x21DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE24u;
label_21de24:
    // 0x21de24: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x21de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_21de28:
    // 0x21de28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21de2c:
    if (ctx->pc == 0x21DE2Cu) {
        ctx->pc = 0x21DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE28u;
        // 0x21de2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE30u;
        goto label_21de30;
    }
    ctx->pc = 0x21DE28u;
    {
        const bool branch_taken_0x21de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE28u;
        // 0x21de2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de28) {
            ctx->pc = 0x21DE38u;
            goto label_21de38;
        }
    }
    ctx->pc = 0x21DE30u;
label_21de30:
    // 0x21de30: 0xc088310  jal         func_220C40
label_21de34:
    if (ctx->pc == 0x21DE34u) {
        ctx->pc = 0x21DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE30u;
        // 0x21de34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE38u;
        goto label_21de38;
    }
    ctx->pc = 0x21DE30u;
    SET_GPR_U32(ctx, 31, 0x21DE38u);
    ctx->pc = 0x21DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE30u;
    // 0x21de34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220C40u, 0x21DE30u, 0x21DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE38u;
label_21de38:
    // 0x21de38: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x21de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_21de3c:
    // 0x21de3c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x21de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_21de40:
    // 0x21de40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_21de44:
    if (ctx->pc == 0x21DE44u) {
        ctx->pc = 0x21DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE40u;
        // 0x21de44: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE48u;
        goto label_21de48;
    }
    ctx->pc = 0x21DE40u;
    {
        const bool branch_taken_0x21de40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE40u;
        // 0x21de44: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de40) {
            ctx->pc = 0x21DE50u;
            goto label_21de50;
        }
    }
    ctx->pc = 0x21DE48u;
label_21de48:
    // 0x21de48: 0xc087004  jal         func_21C010
label_21de4c:
    if (ctx->pc == 0x21DE4Cu) {
        ctx->pc = 0x21DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE48u;
        // 0x21de4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE50u;
        goto label_21de50;
    }
    ctx->pc = 0x21DE48u;
    SET_GPR_U32(ctx, 31, 0x21DE50u);
    ctx->pc = 0x21DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE48u;
    // 0x21de4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C010u, 0x21DE48u, 0x21DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE50u;
label_21de50:
    // 0x21de50: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x21de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_21de54:
    // 0x21de54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_21de58:
    if (ctx->pc == 0x21DE58u) {
        ctx->pc = 0x21DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE54u;
        // 0x21de58: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE5Cu;
        goto label_21de5c;
    }
    ctx->pc = 0x21DE54u;
    {
        const bool branch_taken_0x21de54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE54u;
        // 0x21de58: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de54) {
            ctx->pc = 0x21DE88u;
            goto label_21de88;
        }
    }
    ctx->pc = 0x21DE5Cu;
label_21de5c:
    // 0x21de5c: 0x6ba40247  ldl         $a0, 0x247($sp)
    ctx->pc = 0x21de5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_21de60:
    // 0x21de60: 0x6fa40240  ldr         $a0, 0x240($sp)
    ctx->pc = 0x21de60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_21de64:
    // 0x21de64: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x21de64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_21de68:
    // 0x21de68: 0xb20412e7  sdl         $a0, 0x12E7($s0)
    ctx->pc = 0x21de68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21de6c:
    // 0x21de6c: 0xb60412e0  sdr         $a0, 0x12E0($s0)
    ctx->pc = 0x21de6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21de70:
    // 0x21de70: 0xae0512e8  sw          $a1, 0x12E8($s0)
    ctx->pc = 0x21de70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4840), GPR_U32(ctx, 5));
label_21de74:
    // 0x21de74: 0x8c42a208  lw          $v0, -0x5DF8($v0)
    ctx->pc = 0x21de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943240)));
label_21de78:
    // 0x21de78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21de7c:
    if (ctx->pc == 0x21DE7Cu) {
        ctx->pc = 0x21DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE78u;
        // 0x21de7c: 0x27a80240  addiu       $t0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE80u;
        goto label_21de80;
    }
    ctx->pc = 0x21DE78u;
    {
        const bool branch_taken_0x21de78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE78u;
        // 0x21de7c: 0x27a80240  addiu       $t0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de78) {
            ctx->pc = 0x21DE88u;
            goto label_21de88;
        }
    }
    ctx->pc = 0x21DE80u;
label_21de80:
    // 0x21de80: 0x40f809  jalr        $v0
label_21de84:
    if (ctx->pc == 0x21DE84u) {
        ctx->pc = 0x21DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE80u;
        // 0x21de84: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE88u;
        goto label_21de88;
    }
    ctx->pc = 0x21DE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DE88u);
        ctx->pc = 0x21DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE80u;
        // 0x21de84: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DE80u, 0x21DE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DE88u;
label_21de88:
    // 0x21de88: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_21de8c:
    if (ctx->pc == 0x21DE8Cu) {
        ctx->pc = 0x21DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE88u;
        // 0x21de8c: 0x8fa2027c  lw          $v0, 0x27C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE90u;
        goto label_21de90;
    }
    ctx->pc = 0x21DE88u;
    {
        const bool branch_taken_0x21de88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE88u;
        // 0x21de8c: 0x8fa2027c  lw          $v0, 0x27C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de88) {
            ctx->pc = 0x21DED4u;
            goto label_21ded4;
        }
    }
    ctx->pc = 0x21DE90u;
label_21de90:
    // 0x21de90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21de90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21de94:
    // 0x21de94: 0xc087aea  jal         func_21EBA8
label_21de98:
    if (ctx->pc == 0x21DE98u) {
        ctx->pc = 0x21DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE94u;
        // 0x21de98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DE9Cu;
        goto label_21de9c;
    }
    ctx->pc = 0x21DE94u;
    SET_GPR_U32(ctx, 31, 0x21DE9Cu);
    ctx->pc = 0x21DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE94u;
    // 0x21de98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EBA8u, 0x21DE94u, 0x21DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE9Cu;
label_21de9c:
    // 0x21de9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21de9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21dea0:
    // 0x21dea0: 0xc087d54  jal         func_21F550
label_21dea4:
    if (ctx->pc == 0x21DEA4u) {
        ctx->pc = 0x21DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEA0u;
        // 0x21dea4: 0x8fa50268  lw          $a1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEA8u;
        goto label_21dea8;
    }
    ctx->pc = 0x21DEA0u;
    SET_GPR_U32(ctx, 31, 0x21DEA8u);
    ctx->pc = 0x21DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEA0u;
    // 0x21dea4: 0x8fa50268  lw          $a1, 0x268($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F550u, 0x21DEA0u, 0x21DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEA8u;
label_21dea8:
    // 0x21dea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21deac:
    // 0x21deac: 0xc087d16  jal         func_21F458
label_21deb0:
    if (ctx->pc == 0x21DEB0u) {
        ctx->pc = 0x21DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEACu;
        // 0x21deb0: 0x8fa5026c  lw          $a1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEB4u;
        goto label_21deb4;
    }
    ctx->pc = 0x21DEACu;
    SET_GPR_U32(ctx, 31, 0x21DEB4u);
    ctx->pc = 0x21DEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEACu;
    // 0x21deb0: 0x8fa5026c  lw          $a1, 0x26C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F458u, 0x21DEACu, 0x21DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEB4u;
label_21deb4:
    // 0x21deb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21deb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21deb8:
    // 0x21deb8: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x21deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_21debc:
    // 0x21debc: 0xc087d32  jal         func_21F4C8
label_21dec0:
    if (ctx->pc == 0x21DEC0u) {
        ctx->pc = 0x21DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEBCu;
        // 0x21dec0: 0x8fa60274  lw          $a2, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEC4u;
        goto label_21dec4;
    }
    ctx->pc = 0x21DEBCu;
    SET_GPR_U32(ctx, 31, 0x21DEC4u);
    ctx->pc = 0x21DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEBCu;
    // 0x21dec0: 0x8fa60274  lw          $a2, 0x274($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F4C8u, 0x21DEBCu, 0x21DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEC4u;
label_21dec4:
    // 0x21dec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21dec8:
    // 0x21dec8: 0xc087d70  jal         func_21F5C0
label_21decc:
    if (ctx->pc == 0x21DECCu) {
        ctx->pc = 0x21DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEC8u;
        // 0x21decc: 0x8fa50278  lw          $a1, 0x278($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DED0u;
        goto label_21ded0;
    }
    ctx->pc = 0x21DEC8u;
    SET_GPR_U32(ctx, 31, 0x21DED0u);
    ctx->pc = 0x21DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEC8u;
    // 0x21decc: 0x8fa50278  lw          $a1, 0x278($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F5C0u, 0x21DEC8u, 0x21DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DED0u;
label_21ded0:
    // 0x21ded0: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x21ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_21ded4:
    // 0x21ded4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21ded8:
    if (ctx->pc == 0x21DED8u) {
        ctx->pc = 0x21DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DED4u;
        // 0x21ded8: 0x8fa60280  lw          $a2, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEDCu;
        goto label_21dedc;
    }
    ctx->pc = 0x21DED4u;
    {
        const bool branch_taken_0x21ded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DED4u;
        // 0x21ded8: 0x8fa60280  lw          $a2, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ded4) {
            ctx->pc = 0x21DEE8u;
            goto label_21dee8;
        }
    }
    ctx->pc = 0x21DEDCu;
label_21dedc:
    // 0x21dedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21dee0:
    // 0x21dee0: 0xc087974  jal         func_21E5D0
label_21dee4:
    if (ctx->pc == 0x21DEE4u) {
        ctx->pc = 0x21DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEE0u;
        // 0x21dee4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DEE8u;
        goto label_21dee8;
    }
    ctx->pc = 0x21DEE0u;
    SET_GPR_U32(ctx, 31, 0x21DEE8u);
    ctx->pc = 0x21DEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEE0u;
    // 0x21dee4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E5D0u, 0x21DEE0u, 0x21DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEE8u;
label_21dee8:
    // 0x21dee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21dee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21deec:
    // 0x21deec: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x21deecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_21def0:
    // 0x21def0: 0xdfb10298  ld          $s1, 0x298($sp)
    ctx->pc = 0x21def0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 664)));
label_21def4:
    // 0x21def4: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x21def4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_21def8:
    // 0x21def8: 0xdfb302a8  ld          $s3, 0x2A8($sp)
    ctx->pc = 0x21def8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 680)));
label_21defc:
    // 0x21defc: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x21defcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_21df00:
    // 0x21df00: 0xdfb502b8  ld          $s5, 0x2B8($sp)
    ctx->pc = 0x21df00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 696)));
label_21df04:
    // 0x21df04: 0xdfb602c0  ld          $s6, 0x2C0($sp)
    ctx->pc = 0x21df04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_21df08:
    // 0x21df08: 0xdfb702c8  ld          $s7, 0x2C8($sp)
    ctx->pc = 0x21df08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 712)));
label_21df0c:
    // 0x21df0c: 0xdfbe02d0  ld          $fp, 0x2D0($sp)
    ctx->pc = 0x21df0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_21df10:
    // 0x21df10: 0xdfbf02d8  ld          $ra, 0x2D8($sp)
    ctx->pc = 0x21df10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 728)));
label_21df14:
    // 0x21df14: 0x3e00008  jr          $ra
label_21df18:
    if (ctx->pc == 0x21DF18u) {
        ctx->pc = 0x21DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF14u;
        // 0x21df18: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF1Cu;
        goto label_fallthrough_0x21df14;
    }
    ctx->pc = 0x21DF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF14u;
        // 0x21df18: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21df14:
    ctx->pc = 0x21DF1Cu;
}
